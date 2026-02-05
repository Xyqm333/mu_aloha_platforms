[PcdsFixedAtBuild.common]
gAndromedaPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1200
gAndromedaPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1920

# Smbios Info
gAndromedaPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"Qualcomm"
gAndromedaPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"6"

gAndromedaPkgTokenSpaceGuid.PcdABLProduct|"lahaina"

# Display Caller
# gAndromedaPkgTokenSpaceGuid.PcdDisplayCallerExitDisableDisplay|FALSE
# gAndromedaPkgTokenSpaceGuid.PcdDisplayCallerStallBeforeEnable|2000000

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1200
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1920
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1200
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1920
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|99  # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|123    # = 2340 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|99       # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|123         # = 2340 / EFI_GLYPH_HEIGHT(19)
