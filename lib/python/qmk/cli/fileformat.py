"""Point people to the new command name.
"""
import os
import sys

from milc import cli


@cli.subcommand('Pointer to the new command name: qmk format-text.', hidden=False if cli.config.user.developer else True)
def fileformat(cli):
    """Pointer to the new command name: qmk format-text.
    """
    cli.log.warning('"qmk fileformat" has been renamed to "qmk format-text". Please change to the new command.')
    argv = [sys.executable, *sys.argv]
    argv[argv.index('fileformat')] = 'format-text'
    sys.stdout.flush()
    sys.stderr.flush()
    os.execv(sys.executable, argv)