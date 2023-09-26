/* This file was auto generated by gen_wrapper.sh */
#include <ntddk.h>


typedef NTSTATUS NTAPI (*ZwTraceControl_t) (_In_ ULONG FunctionCode, PVOID InBuffer, _In_ ULONG InBufferLen, PVOID OutBuffer, _In_ ULONG OutBufferLen, _Out_ PULONG ReturnLength);
typedef NTSTATUS NTAPI (*ZwTraceEvent_t) (_In_ HANDLE TraceHandle, _In_ ULONG Flags, _In_ ULONG FieldSize, _In_ PVOID Fields);
typedef NTSTATUS NTAPI (*ZwQueryVirtualMemory_t) (_In_ HANDLE ProcessHandle, _In_ PVOID BaseAddress, _In_ int MemoryInformationClass, _Out_ PVOID MemoryInformation, _In_ SIZE_T MemoryInformationLength, _Out_ PSIZE_T ReturnLength);
typedef NTSTATUS NTAPI (*ZwQuerySystemInformation_t) (_In_ int SystemInformationClass, _Inout_ PVOID SystemInformation, _In_ ULONG SystemInformationLength, _Out_opt_ PULONG ReturnLength);

static ZwTraceControl_t _ZwTraceControl = NULL;
static ZwTraceEvent_t _ZwTraceEvent = NULL;
static ZwQueryVirtualMemory_t _ZwQueryVirtualMemory = NULL;
static ZwQuerySystemInformation_t _ZwQuerySystemInformation = NULL;

int __cdecl ntdll_zw_functions (void)
{
    int retval = 0;
    UNICODE_STRING fnName;

    RtlInitUnicodeString(&fnName, L"ZwTraceControl");
    _ZwTraceControl = MmGetSystemRoutineAddress(&fnName);
    if (_ZwTraceControl == NULL)
    {
        DbgPrint("%s\n", "System routine ZwTraceControl not found.");
        retval++;
    }
    RtlInitUnicodeString(&fnName, L"ZwTraceEvent");
    _ZwTraceEvent = MmGetSystemRoutineAddress(&fnName);
    if (_ZwTraceEvent == NULL)
    {
        DbgPrint("%s\n", "System routine ZwTraceEvent not found.");
        retval++;
    }
    RtlInitUnicodeString(&fnName, L"ZwQueryVirtualMemory");
    _ZwQueryVirtualMemory = MmGetSystemRoutineAddress(&fnName);
    if (_ZwQueryVirtualMemory == NULL)
    {
        DbgPrint("%s\n", "System routine ZwQueryVirtualMemory not found.");
        retval++;
    }
    RtlInitUnicodeString(&fnName, L"ZwQuerySystemInformation");
    _ZwQuerySystemInformation = MmGetSystemRoutineAddress(&fnName);
    if (_ZwQuerySystemInformation == NULL)
    {
        DbgPrint("%s\n", "System routine ZwQuerySystemInformation not found.");
        retval++;
    }

    return retval;
}


NTSTATUS NTAPI ZwTraceControl (_In_ ULONG FunctionCode, PVOID InBuffer, _In_ ULONG InBufferLen, PVOID OutBuffer, _In_ ULONG OutBufferLen, _Out_ PULONG ReturnLength)
{
    if (_ZwTraceControl == NULL)
        return STATUS_PROCEDURE_NOT_FOUND;

    return _ZwTraceControl (FunctionCode, InBuffer, InBufferLen, OutBuffer, OutBufferLen, ReturnLength);
}

NTSTATUS NTAPI ZwTraceEvent (_In_ HANDLE TraceHandle, _In_ ULONG Flags, _In_ ULONG FieldSize, _In_ PVOID Fields)
{
    if (_ZwTraceEvent == NULL)
        return STATUS_PROCEDURE_NOT_FOUND;

    return _ZwTraceEvent (TraceHandle, Flags, FieldSize, Fields);
}

NTSTATUS NTAPI ZwQueryVirtualMemory (_In_ HANDLE ProcessHandle, _In_ PVOID BaseAddress, _In_ int MemoryInformationClass, _Out_ PVOID MemoryInformation, _In_ SIZE_T MemoryInformationLength, _Out_ PSIZE_T ReturnLength)
{
    if (_ZwQueryVirtualMemory == NULL)
        return STATUS_PROCEDURE_NOT_FOUND;

    return _ZwQueryVirtualMemory (ProcessHandle, BaseAddress, MemoryInformationClass, MemoryInformation, MemoryInformationLength, ReturnLength);
}

NTSTATUS NTAPI ZwQuerySystemInformation (_In_ int SystemInformationClass, _Inout_ PVOID SystemInformation, _In_ ULONG SystemInformationLength, _Out_opt_ PULONG ReturnLength)
{
    if (_ZwQuerySystemInformation == NULL)
        return STATUS_PROCEDURE_NOT_FOUND;

    return _ZwQuerySystemInformation (SystemInformationClass, SystemInformation, SystemInformationLength, ReturnLength);
}
