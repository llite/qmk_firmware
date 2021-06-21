"""Point people to the new command name.
"""
import os
import sys

from milc import cli


@cli.argument('-n', '--dry-run', arg_only=True, action='store_true', help="Flag only, don't automatically format.")
@cli.argument('-b', '--base-branch', default='origin/master', help='Branch to compare to diffs to.')
@cli.argument('-a', '--all-files', arg_only=True, action='store_true', help='Format all core files.')
@cli.argument('--core-only', arg_only=True, action='store_true', help='Format core files only.')
@cli.argument('files', nargs='*', arg_only=True, help='Filename(s) to format.')
@cli.subcommand('Pointer to the new command name: qmk format-c.', hidden=False if cli.config.user.developer else True)
def cformat(cli):
    """Pointer to the new command name: qmk format-c.
    """
    cli.log.warning('"qmk cformat" has been renamed to "qmk format-c". Please change to the new command.')
    argv = [sys.executable, *sys.argv]
    argv[argv.index('cformat')] = 'format-c'
    sys.stdout.flush()
    sys.stderr.flush()
    os.execv(sys.executable, argv)