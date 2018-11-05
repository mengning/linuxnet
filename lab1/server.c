/********************************************************************/
/* Copyright (C) SSE-USTC, 2012                                     */
/*                                                                  */
/*  FILE NAME             :  server.h                               */
/*  PRINCIPAL AUTHOR      :  Mengning                               */
/*  SUBSYSTEM NAME        :  server                                 */
/*  MODULE NAME           :  server                                 */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  Any                                    */
/*  DATE OF FIRST RELEASE :  2012/11/22                             */
/*  DESCRIPTION           :  Reply Service Provider                 */
/********************************************************************/

/*
 * Revision log:
 *
 * Created by Mengning,2012/11/22
 *
 */
#include"syswrapper.h"

#define MAX_CONNECT_QUEUE   1024


int main()
{
    char szBuf[MAX_BUF_LEN] = "\0";
    char szReplyMsg[MAX_BUF_LEN] = "hi\0";
    InitializeService();
    while(1)
    {
        ServiceStart();
        RecvMsg(szBuf); 
        SendMsg(szReplyMsg); 
        ServiceStop(); 
    }
    ShutdownService();
    return 0;
}