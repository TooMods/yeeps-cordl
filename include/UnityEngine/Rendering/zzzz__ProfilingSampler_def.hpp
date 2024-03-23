#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilingSampler)
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Profiling {
class Recorder;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProfilingSampler);
// Type: UnityEngine.Rendering::ProfilingSampler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ProfilingSampler*
class CORDL_TYPE ProfilingSampler : public ::System::Object {
public:
  // Declarations
  /// @brief Field <inlineSampler>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inlineSampler_k__BackingField,
                      put = __cordl_internal_set__inlineSampler_k__BackingField))::UnityEngine::Profiling::CustomSampler* _inlineSampler_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field <sampler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sampler_k__BackingField, put = __cordl_internal_set__sampler_k__BackingField))::UnityEngine::Profiling::CustomSampler* _sampler_k__BackingField;

  __declspec(property(get = get_cpuElapsedTime)) float_t cpuElapsedTime;

  __declspec(property(get = get_cpuSampleCount)) int32_t cpuSampleCount;

  __declspec(property(put = set_enableRecording)) bool enableRecording;

  __declspec(property(get = get_gpuElapsedTime)) float_t gpuElapsedTime;

  __declspec(property(get = get_gpuSampleCount)) int32_t gpuSampleCount;

  __declspec(property(get = get_inlineCpuElapsedTime)) float_t inlineCpuElapsedTime;

  __declspec(property(get = get_inlineCpuSampleCount)) int32_t inlineCpuSampleCount;

  __declspec(property(get = get_inlineSampler, put = set_inlineSampler))::UnityEngine::Profiling::CustomSampler* inlineSampler;

  /// @brief Field m_InlineRecorder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InlineRecorder, put = __cordl_internal_set_m_InlineRecorder))::UnityEngine::Profiling::Recorder* m_InlineRecorder;

  /// @brief Field m_Recorder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Recorder, put = __cordl_internal_set_m_Recorder))::UnityEngine::Profiling::Recorder* m_Recorder;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_sampler, put = set_sampler))::UnityEngine::Profiling::CustomSampler* sampler;

  /// @brief Method Begin, addr 0x19fdb64, size 0x64, virtual false, abstract: false, final false
  inline void Begin(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method End, addr 0x19fdbc8, size 0x64, virtual false, abstract: false, final false
  inline void End(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEnum> static inline ::UnityEngine::Rendering::ProfilingSampler* Get(TEnum marker);

  /// @brief Method IsValid, addr 0x19fdc2c, size 0x20, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::ProfilingSampler* New_ctor();

  static inline ::UnityEngine::Rendering::ProfilingSampler* New_ctor(::StringW name);

  constexpr ::UnityEngine::Profiling::CustomSampler*& __cordl_internal_get__inlineSampler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Profiling::CustomSampler*> const& __cordl_internal_get__inlineSampler_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::Profiling::CustomSampler*& __cordl_internal_get__sampler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Profiling::CustomSampler*> const& __cordl_internal_get__sampler_k__BackingField() const;

  constexpr ::UnityEngine::Profiling::Recorder*& __cordl_internal_get_m_InlineRecorder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Profiling::Recorder*> const& __cordl_internal_get_m_InlineRecorder() const;

  constexpr ::UnityEngine::Profiling::Recorder*& __cordl_internal_get_m_Recorder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Profiling::Recorder*> const& __cordl_internal_get_m_Recorder() const;

  constexpr void __cordl_internal_set__inlineSampler_k__BackingField(::UnityEngine::Profiling::CustomSampler* value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__sampler_k__BackingField(::UnityEngine::Profiling::CustomSampler* value);

  constexpr void __cordl_internal_set_m_InlineRecorder(::UnityEngine::Profiling::Recorder* value);

  constexpr void __cordl_internal_set_m_Recorder(::UnityEngine::Profiling::Recorder* value);

  /// @brief Method .ctor, addr 0x19fde64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x19fda68, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_cpuElapsedTime, addr 0x19fdd4c, size 0x4c, virtual false, abstract: false, final false
  inline float_t get_cpuElapsedTime();

  /// @brief Method get_cpuSampleCount, addr 0x19fdd98, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_cpuSampleCount();

  /// @brief Method get_gpuElapsedTime, addr 0x19fdcc0, size 0x4c, virtual false, abstract: false, final false
  inline float_t get_gpuElapsedTime();

  /// @brief Method get_gpuSampleCount, addr 0x19fdd0c, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_gpuSampleCount();

  /// @brief Method get_inlineCpuElapsedTime, addr 0x19fddd8, size 0x4c, virtual false, abstract: false, final false
  inline float_t get_inlineCpuElapsedTime();

  /// @brief Method get_inlineCpuSampleCount, addr 0x19fde24, size 0x40, virtual false, abstract: false, final false
  inline int32_t get_inlineCpuSampleCount();

  /// @brief Method get_inlineSampler, addr 0x19fdc5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Profiling::CustomSampler* get_inlineSampler();

  /// @brief Method get_name, addr 0x19fdc6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_sampler, addr 0x19fdc4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Profiling::CustomSampler* get_sampler();

  /// @brief Method set_enableRecording, addr 0x19fdc7c, size 0x44, virtual false, abstract: false, final false
  inline void set_enableRecording(bool value);

  /// @brief Method set_inlineSampler, addr 0x19fdc64, size 0x8, virtual false, abstract: false, final false
  inline void set_inlineSampler(::UnityEngine::Profiling::CustomSampler* value);

  /// @brief Method set_name, addr 0x19fdc74, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_sampler, addr 0x19fdc54, size 0x8, virtual false, abstract: false, final false
  inline void set_sampler(::UnityEngine::Profiling::CustomSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilingSampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilingSampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilingSampler(ProfilingSampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilingSampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilingSampler(ProfilingSampler const&) = delete;

  /// @brief Field <sampler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Profiling::CustomSampler* ____sampler_k__BackingField;

  /// @brief Field <inlineSampler>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Profiling::CustomSampler* ____inlineSampler_k__BackingField;

  /// @brief Field <name>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field m_Recorder, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Profiling::Recorder* ___m_Recorder;

  /// @brief Field m_InlineRecorder, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Profiling::Recorder* ___m_InlineRecorder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProfilingSampler, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSampler, ____sampler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSampler, ____inlineSampler_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSampler, ____name_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSampler, ___m_Recorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSampler, ___m_InlineRecorder) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProfilingSampler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProfilingSampler*, "UnityEngine.Rendering", "ProfilingSampler");
