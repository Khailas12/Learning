import logging.config
import logging


logging.config.fileConfig(
    fname=r'file.conf', disable_existing_loggers=False
    )

logger = logging.getLogger(__name__)

logger.debug('This is a debug message')

# O/P -> 2021-09-22 01:48:35,747 - __main__ - DEBUG - This is a debug message
