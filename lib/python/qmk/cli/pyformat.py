"""Point people to the new command name.
"""
import os
import sys

from milc import cli


@cli.subcommand('Pointer to the new command name: qmk format-python.', hidden=False if cli.config.user.developer else True)
def pyformat(cli):
    """Pointer to the new command name: qmk format-python.
    """
    cli.log.warning('"qmk pyformat" has been renamed to "qmk format-python". Please change to the new command.')
    argv = [sys.executable, *sys.argv]
    argv[argv.index('pyformat')] = 'format-python'
    sys.stdout.flush()
    sys.stderr.flush()
    os.execv(sys.executable, argv)