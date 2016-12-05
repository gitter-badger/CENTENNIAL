
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.5-5

    User SIL module
    module MicrowaveModel-Notifications
    revision 2016-08-09
    namespace uri:onf:MicrowaveModel-Notifications
    organization ONF (Open Networking Foundation) Open Transport Working Group - Wireless Transport Project

 */

#include <xmlstring.h>

#include "procdefs.h"
#include "agt.h"
#include "agt_cb.h"
#include "agt_not.h"
#include "agt_timer.h"
#include "agt_util.h"
#include "dlq.h"
#include "ncx.h"
#include "ncx_feature.h"
#include "ncxmod.h"
#include "ncxtypes.h"
#include "ses.h"
#include "status.h"
#include "val.h"
#include "val_util.h"
#include "xml_util.h"
#include "u_MicrowaveModel-Notifications.h"
#include "y_MicrowaveModel-Notifications.h"



#include "utils.h"
#include <pthread.h>
#include <time.h>
#include <math.h>


static obj_template_t *ObjectCreationNotification_obj;
static obj_template_t *ObjectDeletionNotification_obj;
static obj_template_t *AttributeValueChangedNotification_obj;
static obj_template_t *ProblemNotification_obj;

/* put your static variables here */


/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_ObjectCreationNotification_send
* 
* Send a u_MicrowaveModel_Notifications_ObjectCreationNotification notification
* Called by your code when notification event occurs
* 
********************************************************************/
void u_MicrowaveModel_Notifications_ObjectCreationNotification_send (
    int32 counter,
    const xmlChar *timeStamp,
    const xmlChar *objectIdRef,
    const xmlChar *objectType)
{
    agt_not_msg_t *notif;
    val_value_t *parmval;
    status_t res = NO_ERR;


    if (LOGDEBUG) {
        log_debug("\nGenerating <ObjectCreationNotification> notification");
    }
    
    notif = agt_not_new_notification(ObjectCreationNotification_obj);
    if (notif == NULL) {
        log_error("\nError: malloc failed, cannot send "
        "<ObjectCreationNotification> notification");
        return;
    }
    
    /* add counter to payload */
    parmval = agt_make_int_leaf(
        ObjectCreationNotification_obj,
        y_MicrowaveModel_Notifications_N_counter,
        counter,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectCreationNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add timeStamp to payload */
    parmval = agt_make_leaf(
        ObjectCreationNotification_obj,
        y_MicrowaveModel_Notifications_N_timeStamp,
        timeStamp,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectCreationNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add objectIdRef to payload */
    parmval = agt_make_leaf(
        ObjectCreationNotification_obj,
        y_MicrowaveModel_Notifications_N_objectIdRef,
        objectIdRef,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectCreationNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add objectType to payload */
    parmval = agt_make_leaf(
        ObjectCreationNotification_obj,
        y_MicrowaveModel_Notifications_N_objectType,
        objectType,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectCreationNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    agt_not_queue_notification(notif);
    
} /* u_MicrowaveModel_Notifications_ObjectCreationNotification_send */


/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_ObjectDeletionNotification_send
* 
* Send a u_MicrowaveModel_Notifications_ObjectDeletionNotification notification
* Called by your code when notification event occurs
* 
********************************************************************/
void u_MicrowaveModel_Notifications_ObjectDeletionNotification_send (
    int32 counter,
    const xmlChar *timeStamp,
    const xmlChar *objectIdRef)
{
    agt_not_msg_t *notif;
    val_value_t *parmval;
    status_t res = NO_ERR;


    if (LOGDEBUG) {
        log_debug("\nGenerating <ObjectDeletionNotification> notification");
    }
    
    notif = agt_not_new_notification(ObjectDeletionNotification_obj);
    if (notif == NULL) {
        log_error("\nError: malloc failed, cannot send "
        "<ObjectDeletionNotification> notification");
        return;
    }
    
    /* add counter to payload */
    parmval = agt_make_int_leaf(
        ObjectDeletionNotification_obj,
        y_MicrowaveModel_Notifications_N_counter,
        counter,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectDeletionNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add timeStamp to payload */
    parmval = agt_make_leaf(
        ObjectDeletionNotification_obj,
        y_MicrowaveModel_Notifications_N_timeStamp,
        timeStamp,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectDeletionNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add objectIdRef to payload */
    parmval = agt_make_leaf(
        ObjectDeletionNotification_obj,
        y_MicrowaveModel_Notifications_N_objectIdRef,
        objectIdRef,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ObjectDeletionNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    agt_not_queue_notification(notif);
    
} /* u_MicrowaveModel_Notifications_ObjectDeletionNotification_send */


/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_AttributeValueChangedNotification_send
* 
* Send a u_MicrowaveModel_Notifications_AttributeValueChangedNotification notification
* Called by your code when notification event occurs
* 
********************************************************************/
void u_MicrowaveModel_Notifications_AttributeValueChangedNotification_send (
    int32 counter,
    const xmlChar *timeStamp,
    const xmlChar *objectIdRef,
    const xmlChar *attributeName,
    const xmlChar *newValue)
{
    agt_not_msg_t *notif;
    val_value_t *parmval;
    status_t res = NO_ERR;


    if (LOGDEBUG) {
        log_debug("\nGenerating <AttributeValueChangedNotification> notification");
    }
    
    notif = agt_not_new_notification(AttributeValueChangedNotification_obj);
    if (notif == NULL) {
        log_error("\nError: malloc failed, cannot send "
        "<AttributeValueChangedNotification> notification");
        return;
    }
    
    /* add counter to payload */
    parmval = agt_make_int_leaf(
        AttributeValueChangedNotification_obj,
        y_MicrowaveModel_Notifications_N_counter,
        counter,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<AttributeValueChangedNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add timeStamp to payload */
    parmval = agt_make_leaf(
        AttributeValueChangedNotification_obj,
        y_MicrowaveModel_Notifications_N_timeStamp,
        timeStamp,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<AttributeValueChangedNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add objectIdRef to payload */
    parmval = agt_make_leaf(
        AttributeValueChangedNotification_obj,
        y_MicrowaveModel_Notifications_N_objectIdRef,
        objectIdRef,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<AttributeValueChangedNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add attributeName to payload */
    parmval = agt_make_leaf(
        AttributeValueChangedNotification_obj,
        y_MicrowaveModel_Notifications_N_attributeName,
        attributeName,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<AttributeValueChangedNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add newValue to payload */
    parmval = agt_make_leaf(
        AttributeValueChangedNotification_obj,
        y_MicrowaveModel_Notifications_N_newValue,
        newValue,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<AttributeValueChangedNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    agt_not_queue_notification(notif);
    
} /* u_MicrowaveModel_Notifications_AttributeValueChangedNotification_send */


/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_ProblemNotification_send
* 
* Send a u_MicrowaveModel_Notifications_ProblemNotification notification
* Called by your code when notification event occurs
* 
********************************************************************/
void u_MicrowaveModel_Notifications_ProblemNotification_send (
    int32 counter,
    const xmlChar *timeStamp,
    const xmlChar *objectIdRef,
    const xmlChar *problem,
    const xmlChar *severity)
{
    agt_not_msg_t *notif;
    val_value_t *parmval;
    status_t res = NO_ERR;


    if (LOGDEBUG) {
        log_debug("\nGenerating <ProblemNotification> notification");
    }
    
    notif = agt_not_new_notification(ProblemNotification_obj);
    if (notif == NULL) {
        log_error("\nError: malloc failed, cannot send "
        "<ProblemNotification> notification");
        return;
    }
    
    /* add counter to payload */
    parmval = agt_make_int_leaf(
        ProblemNotification_obj,
        y_MicrowaveModel_Notifications_N_counter,
        counter,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ProblemNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add timeStamp to payload */
    parmval = agt_make_leaf(
        ProblemNotification_obj,
        y_MicrowaveModel_Notifications_N_timeStamp,
        timeStamp,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ProblemNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add objectIdRef to payload */
    parmval = agt_make_leaf(
        ProblemNotification_obj,
        y_MicrowaveModel_Notifications_N_objectIdRef,
        objectIdRef,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ProblemNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add problem to payload */
    parmval = agt_make_leaf(
        ProblemNotification_obj,
        y_MicrowaveModel_Notifications_N_problem,
        problem,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ProblemNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    /* add severity to payload */
    parmval = agt_make_leaf(
        ProblemNotification_obj,
        y_MicrowaveModel_Notifications_N_severity,
        severity,
        &res);
    if (parmval == NULL) {
        log_error(
            "\nError: make leaf failed (%s), cannot send "
            "<ProblemNotification> notification",
            get_error_string(res));
    } else {
        agt_not_add_to_payload(notif, parmval);
    }
    
    agt_not_queue_notification(notif);
    
} /* u_MicrowaveModel_Notifications_ProblemNotification_send */

/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_init
* 
* initialize the MicrowaveModel-Notifications server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
status_t u_MicrowaveModel_Notifications_init (
    const xmlChar *modname,
    const xmlChar *revision)
{
    status_t res = NO_ERR;
    ncx_module_t *MicrowaveModel_Notifications_mod = NULL;
    MicrowaveModel_Notifications_mod = ncx_find_module(
        y_MicrowaveModel_Notifications_M_MicrowaveModel_Notifications,
        y_MicrowaveModel_Notifications_R_MicrowaveModel_Notifications);
    if (MicrowaveModel_Notifications_mod == NULL) {
        return ERR_NCX_OPERATION_FAILED;
    }
    ObjectCreationNotification_obj = ncx_find_object(
        MicrowaveModel_Notifications_mod,
        y_MicrowaveModel_Notifications_N_ObjectCreationNotification);
    if (MicrowaveModel_Notifications_mod == NULL) {
        return SET_ERROR(ERR_NCX_DEF_NOT_FOUND);
    }
    ObjectDeletionNotification_obj = ncx_find_object(
        MicrowaveModel_Notifications_mod,
        y_MicrowaveModel_Notifications_N_ObjectDeletionNotification);
    if (MicrowaveModel_Notifications_mod == NULL) {
        return SET_ERROR(ERR_NCX_DEF_NOT_FOUND);
    }
    AttributeValueChangedNotification_obj = ncx_find_object(
        MicrowaveModel_Notifications_mod,
        y_MicrowaveModel_Notifications_N_AttributeValueChangedNotification);
    if (MicrowaveModel_Notifications_mod == NULL) {
        return SET_ERROR(ERR_NCX_DEF_NOT_FOUND);
    }
    ProblemNotification_obj = ncx_find_object(
        MicrowaveModel_Notifications_mod,
        y_MicrowaveModel_Notifications_N_ProblemNotification);
    if (MicrowaveModel_Notifications_mod == NULL) {
        return SET_ERROR(ERR_NCX_DEF_NOT_FOUND);
    }
    /* put your module initialization code here */
    
    return res;
} /* u_MicrowaveModel_Notifications_init */

static void generateNotification()
{
	xmlChar buffer[256];
	int n = 0, freq = 0, attrValChangedcounter = 0, problemNotificationCounter;
	int nr = 0;
	char nr_extension[20];
	int cleared[21];

	for (int t=0; t < 20; t++) {
		cleared[t] = 0;
	}

	xmlChar dateAndTime[256];

	const xmlChar evalPath[1000], *resultString;
	sprintf(evalPath, "/data/MW_Notifications/notificationTimeout");

	resultString = get_value_from_xpath(evalPath);
	if (resultString)
	{
		freq = strtol(resultString, NULL, 10);
		free(resultString);
	}

	YUMA_ASSERT(freq == 0, return, "No eventFrequency configured. Not generating any notifications.");

    while (TRUE)
    {
    	time_t t = time(NULL);
    	struct tm tm = *localtime(&t);
    	struct timeval tv;

    	gettimeofday(&tv, NULL);
    	int millisec;
    	millisec = lrint(tv.tv_usec/1000.0); // Round to nearest millisec
    	if (millisec>=1000)
    	{ // Allow for rounding up to nearest second
    		millisec -=1000;
    		tv.tv_sec++;
    		millisec /= 100;
    	}

    	sprintf(dateAndTime, "%04d%02d%02d%02d%02d%02d.%01dZ", 
			tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, 
			tm.tm_hour, tm.tm_min, tm.tm_sec, millisec/100);

	if (nr == 0) {
		sprintf(nr_extension,"");
	} else {
    		sprintf(nr_extension, "%d", nr);
	}

    	sprintf(evalPath, "/data/MW_Notifications/problemNotification/problemName%s",nr_extension);
    	resultString = get_value_from_xpath(evalPath);

    	if (resultString)
    	{
    		sprintf(evalPath, "/data/MW_Notifications/problemNotification/objIdRef%s",nr_extension);
    		char* objIdRef = get_value_from_xpath(evalPath);
		char* severity;

		if (cleared[nr] == 0) {
    			sprintf(evalPath, "/data/MW_Notifications/problemNotification/severity%s",nr_extension);
			severity = get_value_from_xpath(evalPath);
			cleared[nr] = 1;
		} else {
    			sprintf(evalPath, "/data/MW_Notifications/problemNotification/cleared%s",nr_extension);
			severity = get_value_from_xpath(evalPath);
			cleared[nr] = 0;
		}

    		u_MicrowaveModel_Notifications_ProblemNotification_send(problemNotificationCounter++,
    				dateAndTime, objIdRef,	resultString, severity);
    		free(objIdRef);
    		free(severity);
    		free(resultString);
		nr++;
		if (nr >= 20) {
			nr = 0;
		}
    	} else {
        	nr = 0;
        }		

    	sprintf(evalPath, "/data/MW_Notifications/attributeValueChangedNotification/attributeName");
		resultString = get_value_from_xpath(evalPath);

		if (resultString)
		{
			sprintf(evalPath, "/data/MW_Notifications/attributeValueChangedNotification/objIdRef");
			char* objIdRef = get_value_from_xpath(evalPath);

			sprintf(evalPath, "/data/MW_Notifications/attributeValueChangedNotification/newValue");
			char* newValue = get_value_from_xpath(evalPath);

			u_MicrowaveModel_Notifications_AttributeValueChangedNotification_send(attrValChangedcounter++,
					dateAndTime,
					objIdRef,
					resultString,
					newValue);

			free(objIdRef);
			free(newValue);
			free(resultString);
		}
    	sleep(freq);
    }
}

/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
status_t u_MicrowaveModel_Notifications_init2 (void)
{
    status_t res = NO_ERR;

    pthread_t gen_notif_thread;

    if(pthread_create(&gen_notif_thread, NULL, generateNotification, NULL))
    {
    	YUMA_ASSERT(TRUE, return ERR_INTERNAL_VAL, "Could not create thread for generating notifications!");
    }

    return NO_ERR;
} /* u_MicrowaveModel_Notifications_init2 */

/********************************************************************
* FUNCTION u_MicrowaveModel_Notifications_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
void u_MicrowaveModel_Notifications_cleanup (void)
{
    /* put your cleanup code here */
    
} /* u_MicrowaveModel_Notifications_cleanup */

/* END u_MicrowaveModel_Notifications.c */
