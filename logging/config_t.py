import logging
import logging.config
import yaml


with open ('config_t.yaml', 'r') as configfile:
    config = yaml.safe_load(configfile.read())
    logging.config.dictConfig(config)
    
    
logger = logging.getLogger(__name__)
logger.debug('This is a debug msg')

# O/P -> 2021-09-22 01:56:42,256 - __main__ - DEBUG - This is a debug msg