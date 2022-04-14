// GENERATED FILE - DO NOT EDIT.
// Generated by gen_features.py using data from *_features.json.
//
// Copyright 2022 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// angle_features_autogen.h: List of ANGLE features to help enable/disable them in tests.

#ifndef ANGLE_SRC_TESTS_TEST_UTILS_ANGLE_FEATURES_AUTOGEN_H_
#define ANGLE_SRC_TESTS_TEST_UTILS_ANGLE_FEATURES_AUTOGEN_H_

#include "util_export.h"

namespace angle
{
enum class Feature
{
    AddAndTrueToLoopCondition,
    AddBaseVertexToVertexID,
    AddMockTextureNoRenderTarget,
    AdjustSrcDstRegionBlitFramebuffer,
    AllocateNonZeroMemory,
    AllowBufferReadWrite,
    AllowClearForRobustResourceInit,
    AllowCompressedFormats,
    AllowES3OnFL10_0,
    AllowEtcFormats,
    AllowGenMultipleMipsPerPass,
    AllowGenerateMipmapWithCompute,
    AllowInlineConstVertexData,
    AllowMultisampleStoreAndResolve,
    AllowRuntimeSamplerCompareMode,
    AllowSamplerCompareGradient,
    AllowSamplerCompareLod,
    AllowSeparatedDepthStencilBuffers,
    AllowTranslateUniformBlockToStructuredBuffer,
    AlwaysCallUseProgramAfterLink,
    AlwaysUnbindFramebufferTexture2D,
    AsyncCommandQueue,
    Avoid1BitAlphaTextureFormats,
    BasicGLLineRasterization,
    BindEmptyForUnusedDescriptorSets,
    BindTransformFeedbackBufferBeforeBindBufferRange,
    BottomLeftOriginPresentRegionRectangles,
    BresenhamLineRasterization,
    CallClearTwice,
    CaptureLimits,
    ClampArrayAccess,
    ClampFragDepth,
    ClampMscRate,
    ClampPointSize,
    ClearToZeroOrOneBroken,
    ClipSrcRegionBlitFramebuffer,
    CompressVertexData,
    CreatePipelineDuringLink,
    DeferFlushUntilEndRenderPass,
    DepthClamping,
    DepthStencilBlitExtraCopy,
    DirectMetalGeneration,
    DisableAnisotropicFiltering,
    DisableB5G6R5Support,
    DisableBlendFuncExtended,
    DisableDrawBuffersIndexed,
    DisableFifoPresentMode,
    DisableFlippingBlitWithCommand,
    DisableGPUSwitchingSupport,
    DisableMultisampledRenderToTexture,
    DisableNativeParallelCompile,
    DisableProgramBinary,
    DisableProgramCachingForTransformFeedback,
    DisableSemaphoreFd,
    DisableSyncControlSupport,
    DisableTimestampQueries,
    DisableWorkerContexts,
    DisallowSeamfulCubeMapEmulation,
    DoWhileGLSLCausesGPUHang,
    DoesSRGBClearsOnLinearFramebufferAttachments,
    DontInitializeUninitializedLocals,
    DontRelinkProgramsInParallel,
    DontUseLoopsToInitializeVariables,
    EmulateAbsIntFunction,
    EmulateAtan2Float,
    EmulateCopyTexImage2DFromRenderbuffers,
    EmulateDithering,
    EmulateImmutableCompressedTexture3D,
    EmulateIsnanFloat,
    EmulateMaxVertexAttribStride,
    EmulatePackSkipRowsAndPackSkipPixels,
    EmulatePrimitiveRestartFixedIndex,
    EmulateR32fImageAtomicExchange,
    EmulateRGB10,
    EmulateTinyStencilTextures,
    EmulateTransformFeedback,
    EmulatedPrerotation180,
    EmulatedPrerotation270,
    EmulatedPrerotation90,
    EnableCompressingPipelineCacheInThreadPool,
    EnableMultisampledRenderToTexture,
    EnablePreRotateSurfaces,
    EnablePrecisionQualifiers,
    EnableProgramBinaryForCapture,
    EncodeAndDecodeSRGBForGenerateMipmap,
    ExpandIntegerPowExpressions,
    ExposeNonConformantExtensionsAndVersions,
    FinishDoesNotCauseQueriesToBeAvailable,
    FlushAfterEndingTransformFeedback,
    FlushBeforeDeleteTextureIfCopiedTo,
    FlushOnFramebufferChange,
    ForceAtomicValueResolution,
    ForceBufferGPUStorage,
    ForceD16TexFilter,
    ForceD24S8AsUnsupported,
    ForceDriverUniformOverSpecConst,
    ForceFallbackFormat,
    ForceFragmentShaderPrecisionHighpToMediump,
    ForceInitShaderVariables,
    ForceMaxUniformBufferSize16KB,
    ForceNearestFiltering,
    ForceNearestMipFiltering,
    ForceNonCSBaseMipmapGeneration,
    ForceRobustResourceInit,
    ForceSubmitImmutableTextureUpdates,
    ForceTextureLodOffset1,
    ForceTextureLodOffset2,
    ForceTextureLodOffset3,
    ForceTextureLodOffset4,
    GenerateSPIRVThroughGlslang,
    GetDimensionsIgnoresBaseLevel,
    HasBaseVertexInstancedDraw,
    HasCheapRenderPass,
    HasDepthAutoResolve,
    HasEvents,
    HasExplicitMemBarrier,
    HasNonUniformDispatch,
    HasStencilAutoResolve,
    HasStencilOutput,
    HasTextureSwizzle,
    InitFragmentOutputVariables,
    InitializeCurrentVertexAttributes,
    IntelDisableFastMath,
    IntelExplicitBoolCastWorkaround,
    KeepBufferShadowCopy,
    LimitMax3dArrayTextureSizeTo1024,
    LimitMaxMSAASamplesTo4,
    LimitMaxTextureSizeTo4096,
    LogMemoryReportCallbacks,
    LogMemoryReportStats,
    LoseContextOnOutOfMemory,
    MrtPerfWorkaround,
    MultisampleColorFormatShaderReadWorkaround,
    OverrideSurfaceFormatRGB8toRGBA8,
    PackLastRowSeparatelyForPaddingInclusion,
    PackOverlappingRowsSeparatelyPackBuffer,
    PadBuffersToMaxVertexAttribStride,
    PerFrameWindowSizeQuery,
    PersistentlyMappedBuffers,
    PreAddTexelFetchOffsets,
    PreferAggregateBarrierCalls,
    PreferCPUForBufferSubData,
    PreferDrawClearOverVkCmdClearAttachments,
    PreferSkippingInvalidateForEmulatedFormats,
    PreferSubmitAtFBOBoundary,
    PromotePackedFormatsTo8BitPerChannel,
    ProvokingVertex,
    QueryCounterBitsGeneratesErrors,
    ReadPixelsUsingImplementationColorReadFormatForNorm16,
    ReapplyUBOBindingsAfterUsingBinaryProgram,
    RegenerateStructNames,
    RemoveDynamicIndexingOfSwizzledVector,
    RemoveInvariantAndCentroidForESSL3,
    ResetTexImage2DBaseLevel,
    RetainSpirvDebugInfo,
    RewriteFloatUnaryMinusOperator,
    RewriteRepeatedAssignToSwizzled,
    RewriteRowMajorMatrices,
    RewriteUnaryMinusOperator,
    RgbDXT1TexturesSampleZeroAlpha,
    Rgba4IsNotSupportedForColorRendering,
    SanitizeAmdGpuRendererString,
    ScalarizeVecAndMatConstructorArgs,
    SelectViewInGeometryShader,
    SetDataFasterThanImageUpload,
    SetPrimitiveRestartFixedIndexForDrawArrays,
    SetZeroLevelBeforeGenerateMipmap,
    ShadowBuffers,
    ShiftInstancedArrayDataWithExtraOffset,
    SkipVSConstantRegisterZero,
    SupportsAndroidHardwareBuffer,
    SupportsAndroidNativeFenceSync,
    SupportsBlendOperationAdvanced,
    SupportsCustomBorderColor,
    SupportsDepthClipControl,
    SupportsDepthStencilResolve,
    SupportsExternalFenceCapabilities,
    SupportsExternalFenceFd,
    SupportsExternalMemoryDmaBufAndModifiers,
    SupportsExternalMemoryFd,
    SupportsExternalMemoryFuchsia,
    SupportsExternalMemoryHost,
    SupportsExternalSemaphoreCapabilities,
    SupportsExternalSemaphoreFd,
    SupportsExternalSemaphoreFuchsia,
    SupportsFilteringPrecision,
    SupportsGGPFrameToken,
    SupportsGeometryStreamsCapability,
    SupportsHostQueryReset,
    SupportsImageCubeArray,
    SupportsImageFormatList,
    SupportsIncrementalPresent,
    SupportsIndexTypeUint8,
    SupportsLockSurfaceExtension,
    SupportsMultiDrawIndirect,
    SupportsMultisampledRenderToSingleSampled,
    SupportsMultiview,
    SupportsNegativeViewport,
    SupportsPipelineStatisticsQuery,
    SupportsProtectedMemory,
    SupportsRenderPassLoadStoreOpNone,
    SupportsRenderPassStoreOpNoneQCOM,
    SupportsRenderpass2,
    SupportsShaderFloat16,
    SupportsShaderFramebufferFetch,
    SupportsShaderFramebufferFetchNonCoherent,
    SupportsShaderStencilExport,
    SupportsSharedPresentableImageExtension,
    SupportsSurfaceCapabilities2Extension,
    SupportsSurfaceProtectedCapabilitiesExtension,
    SupportsSurfaceProtectedSwapchains,
    SupportsSurfacelessQueryExtension,
    SupportsTransformFeedbackExtension,
    SupportsYUVSamplerConversion,
    SwapbuffersOnFlushOrFinishWithSingleBuffer,
    SyncVertexArraysToDefault,
    UnbindFBOOnContextSwitch,
    UnfoldShortCircuits,
    UnpackLastRowSeparatelyForPaddingInclusion,
    UnpackOverlappingRowsSeparatelyUnpackBuffer,
    UnsizedsRGBReadPixelsDoesntTransform,
    UploadTextureDataInChunks,
    UseInstancedPointSpriteEmulation,
    UseMultipleDescriptorsForExternalFormats,
    UseSystemMemoryForConstantBuffers,
    UseUnusedBlocksWithStandardOrSharedLayout,
    WaitIdleBeforeSwapchainRecreation,
    ZeroMaxLodWorkaround,

    InvalidEnum,
    EnumCount = InvalidEnum,
};

ANGLE_UTIL_EXPORT extern const char *GetFeatureName(Feature feature);

}  // namespace angle

#endif  // ANGLE_SRC_TESTS_TEST_UTILS_ANGLE_FEATURES_AUTOGEN_H_
