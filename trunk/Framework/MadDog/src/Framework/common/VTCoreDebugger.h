#pragma once

#include <ntddk.h>

//+++++++++++++++++++++Definitions+++++++++++++++++++++++++++

#ifdef USE_DEBUG_LIBRUARY
#define Print(x) WriteDbgInfo x
#else
#define Print(x) {}
#endif

//+++++++++++++++++++++Public Functions++++++++++++++++++++++++

/**
 * Effects: Write info with format.
 * 带格式写String
 **/
NTSTATUS NTAPI PrintDbgInfo (PUCHAR fmt,...);

/**
 * Effects: Initialize SpinLock, must be called before invoke WriteDbgInfo function
 * 初始化写信息自旋锁,必须在调用WriteDbgInfo方法前调用
 **/
void NTAPI PrintInfoInit();

void NTAPI PrintInfoDispose();