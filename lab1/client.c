/********************************************************************/
/* Copyright (C) SSE-USTC, 2012                                     */
/*                                                                  */
/*  FILE NAME             :  client.h                               */
/*  PRINCIPAL AUTHOR      :  Mengning                               */
/*  SUBSYSTEM NAME        :  client                                 */
/*  MODULE NAME           :  client                                 */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  Any                                    */
/*  DATE OF FIRST RELEASE :  2012/11/22                             */
/*  DESCRIPTION           :  Reply Service User(Client)             */
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
    char szMsg[MAX_BUF_LEN] = "hello\0";
    OpenRemoteService();
    SendMsg(szMsg);
    RecvMsg(szBuf); 
    CloseRemoteService();
    return 0;
}