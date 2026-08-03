#ifndef __S2_PIN_CODES___CFS___JNV_H__
#define __S2_PIN_CODES___CFS___JNV_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Pin_Codes___CFS___JNV_KEY_0_DIG_INPUT 0
#define __S2_Pin_Codes___CFS___JNV_KEY_1_DIG_INPUT 1
#define __S2_Pin_Codes___CFS___JNV_KEY_2_DIG_INPUT 2
#define __S2_Pin_Codes___CFS___JNV_KEY_3_DIG_INPUT 3
#define __S2_Pin_Codes___CFS___JNV_KEY_4_DIG_INPUT 4
#define __S2_Pin_Codes___CFS___JNV_KEY_5_DIG_INPUT 5
#define __S2_Pin_Codes___CFS___JNV_KEY_6_DIG_INPUT 6
#define __S2_Pin_Codes___CFS___JNV_KEY_7_DIG_INPUT 7
#define __S2_Pin_Codes___CFS___JNV_KEY_8_DIG_INPUT 8
#define __S2_Pin_Codes___CFS___JNV_KEY_9_DIG_INPUT 9
#define __S2_Pin_Codes___CFS___JNV_KEY_CLEAR_DIG_INPUT 10
#define __S2_Pin_Codes___CFS___JNV_KEY_ENTER_DIG_INPUT 11
#define __S2_Pin_Codes___CFS___JNV_ENABLE_BACKDOOR_DIG_INPUT 12
#define __S2_Pin_Codes___CFS___JNV_READ_FILE_DIG_INPUT 13
#define __S2_Pin_Codes___CFS___JNV_SAVE_FILE_DIG_INPUT 14

#define __S2_Pin_Codes___CFS___JNV_STORE_CODE_DIG_INPUT 15
#define __S2_Pin_Codes___CFS___JNV_STORE_CODE_ARRAY_LENGTH 8

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_Pin_Codes___CFS___JNV_CODE_ERROR_DIG_OUTPUT 0
#define __S2_Pin_Codes___CFS___JNV_CODE_OK_BACKDOOR_DIG_OUTPUT 1

#define __S2_Pin_Codes___CFS___JNV_CODE_OK_DIG_OUTPUT 2
#define __S2_Pin_Codes___CFS___JNV_CODE_OK_ARRAY_LENGTH 8

/*
* ANALOG_OUTPUT
*/

#define __S2_Pin_Codes___CFS___JNV_CODE_FB$_STRING_OUTPUT 0
#define __S2_Pin_Codes___CFS___JNV_CODE_STARS_FB$_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Pin_Codes___CFS___JNV_NR_OF_DIGITS_INTEGER_PARAMETER 10
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_Pin_Codes___CFS___JNV_BACKDOOR_CODE$_STRING_PARAMETER 11
#define __S2_Pin_Codes___CFS___JNV_FILE_NAME$_STRING_PARAMETER 12
#define __S2_Pin_Codes___CFS___JNV_BACKDOOR_CODE$_PARAM_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __BACKDOOR_CODE$, __S2_Pin_Codes___CFS___JNV_BACKDOOR_CODE$_PARAM_MAX_LEN );
#define __S2_Pin_Codes___CFS___JNV_FILE_NAME$_PARAM_MAX_LEN 256
CREATE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __FILE_NAME$, __S2_Pin_Codes___CFS___JNV_FILE_NAME$_PARAM_MAX_LEN );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Pin_Codes___CFS___JNV_CODE_INPUT$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __CODE_INPUT$, __S2_Pin_Codes___CFS___JNV_CODE_INPUT$_STRING_MAX_LEN );
#define __S2_Pin_Codes___CFS___JNV_CODE_STARS$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __CODE_STARS$, __S2_Pin_Codes___CFS___JNV_CODE_STARS$_STRING_MAX_LEN );
#define __S2_Pin_Codes___CFS___JNV_CODES$_ARRAY_NUM_ELEMS 7
#define __S2_Pin_Codes___CFS___JNV_CODES$_ARRAY_NUM_CHARS 10
CREATE_STRING_ARRAY( S2_Pin_Codes___CFS___JNV, __CODES$, __S2_Pin_Codes___CFS___JNV_CODES$_ARRAY_NUM_ELEMS, __S2_Pin_Codes___CFS___JNV_CODES$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Pin_Codes___CFS___JNV )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __STORE_CODE );
   DECLARE_IO_ARRAY( __CODE_OK );
   DECLARE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __BACKDOOR_CODE$ );
   DECLARE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __FILE_NAME$ );
};

START_NVRAM_VAR_STRUCT( S2_Pin_Codes___CFS___JNV )
{
   DECLARE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __CODE_INPUT$ );
   DECLARE_STRING_STRUCT( S2_Pin_Codes___CFS___JNV, __CODE_STARS$ );
   DECLARE_STRING_ARRAY( S2_Pin_Codes___CFS___JNV, __CODES$ );
   unsigned short __POS;
};



#endif //__S2_PIN_CODES___CFS___JNV_H__

