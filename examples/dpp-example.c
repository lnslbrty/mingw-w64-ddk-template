#include <ntddk.h>

DRIVER_INITIALIZE DriverEntry;
DRIVER_UNLOAD DriverUnload;

NTSTATUS DriverEntry(struct _DRIVER_OBJECT * DriverObject, PUNICODE_STRING RegistryPath)
{
    (void)DriverObject;
    (void)RegistryPath;

    DbgPrint("%s\n", "Hello ring0!");

    return STATUS_SUCCESS;
}

VOID DriverUnload(struct _DRIVER_OBJECT * DriverObject)
{
    (void)DriverObject;

    DbgPrint("%s\n", "Bye ring0!");
}
