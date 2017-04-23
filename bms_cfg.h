/*********************************************************************************************************
* File : bms_cfg.h
*********************************************************************************************************/
#ifndef __BMS_CFG_H_
#define __BMS_CFG_H_

#define BMS_DEBUG_EN                    1    			/* Enable(1) debug variables*/
#define BMS_CRC_EN               	    1    			/* Enable(1) crc*/


#define BMS_STORGE_BUF_SIZE			        256				/*数据保存时的缓冲区大小*/
#define BMS_BAT_TYPE					          0x01			/*铁黎*/
#define BMS_BAT_CAP						          200u			/*0.1AH*/
#define BMS_LOCAL_ADD					          1u				/*本机地址*/
#define BMS_BMU_MAX_NODE			        	30
#define BMS_CELL_NUM                    320
#define BMS_CELL_TEMP_NUM               30
#define BMS_CELL_VOL_MAX				        3650
#define BMS_CELL_VOL_MIN			        	2500
#define BMS_CELL_GROUP					        1,2,3,0,0		/*电池排列*/
#define BMS_CELL_BLACNE_VOL				      200  			/*mV*/

/*********************************参数设置************************************/
#define BMS_PAR_STORGE_ADD_START	     100  			/*参数保存的位置  SMALL FALSH 中*/
#define BMS_PAR_STORGE_SIZE			        255	 			/*参数保存的数据长度*/


#endif
