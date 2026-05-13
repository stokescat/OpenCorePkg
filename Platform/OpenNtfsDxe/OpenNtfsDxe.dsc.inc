
[Defines]
!ifndef NTFS_ENABLE
  DEFINE NTFS_ENABLE = TRUE
!endif

[LibraryClasses]
!if $(NTFS_ENABLE) == TRUE
  OcStringLib|OpenCorePkg/Library/OcStringLib/OcStringLib.inf
!endif

[Components.common]
  OpenCorePkg/Platform/OpenNtfsDxe/OpenNtfsDxe.inf
