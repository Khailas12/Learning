# Handlers come into the picture when you want to configure your own loggers and send the logs to multiple places when they are generated


import logging


logger = logging.getLogger(__name__)    # create a custom logger


# creating handlers
c_handler = logging.StreamHandler()
f_handler = logging.FileHandler('file.log')
c_handler.setLevel(logging.WARNING)
f_handler.setLevel(logging.ERROR)


# create formatters and add it to handlers
c_format = logging.Formatter('%(name)s -%(levelname)s - %(message)s')
f_format = logging.Formatter('%(asctime)s -%(name)s - %(levelname)s - %(message)s')
c_handler.setFormatter(c_format)
f_handler.setFormatter(f_format)


# add handlers to the logger
logger.addHandler(c_handler)
logger.addHandler(f_handler)

logger.warning('This is a warning')
logger.error('This is an error')

# O/P -> 
# __main__ -WARNING - This is a warning
# __main__ -ERROR - This is an error