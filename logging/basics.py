# https://realpython.com/python-logging/

import logging

# Logging is a means of tracking events that happen when some software runs

# logging.debug('debug')
# logging.info('info')
# logging.warning('warning')
# logging.error('error')
# logging.critical('critical')
# this function can only be called once.


# The basicConfig() configures the root logger. It does basic configuration for the logging system by creating a stream handler with a default formatter. The debug() , info() , warning() , error() and critical() call basicConfig() automatically if no handlers are defined for the root logger.


# debug
logging.basicConfig(level=logging.DEBUG)
logging.debug('This will get logged')
# O/P -> DEBUG:root:This will get logged

# warning
logging.basicConfig(filename='app.log', filemode='w', format='%(name)s - %(levelname)s - %(message)s')  # 'w' -> write mode
logging.warning('This will get logged to a file')
# O/P -> root - ERROR - This will get logged to a file

logging.basicConfig(format='%(process)d-%(levelname)s-%(message)s')
logging.warning('This is a warning')
# O/P -> 18472-WARNING-This is a Warning


# info
logging.basicConfig(format='%(asctime)s - %(message)s', level=logging.INFO)
logging.info('User logged in')
# O/P -> 2021-09-22 00:54:32,761 - Admin logged in


logging.basicConfig(format='%(asctime)s -%(message)s', datefmt='%d-%b-%y %H:%M:%S')
logging.warning('Admin logged out')
# O/P -> 22-Sep-21 01:01:10 -Admin logged out
