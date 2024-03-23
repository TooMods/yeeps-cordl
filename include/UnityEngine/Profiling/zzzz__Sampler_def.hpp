#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sampler)
namespace UnityEngine::Profiling {
class Recorder;
}
// Forward declare root types
namespace UnityEngine::Profiling {
class Sampler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::Sampler);
// Type: UnityEngine.Profiling::Sampler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: ::UnityEngine.Profiling::Sampler*
class CORDL_TYPE Sampler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Field s_InvalidSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InvalidSampler, put = setStaticF_s_InvalidSampler))::UnityEngine::Profiling::Sampler* s_InvalidSampler;

  /// @brief Method GetRecorder, addr 0x2a87600, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Profiling::Recorder* GetRecorder();

  static inline ::UnityEngine::Profiling::Sampler* New_ctor();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x2a875a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Profiling::Sampler* getStaticF_s_InvalidSampler();

  /// @brief Method get_isValid, addr 0x2a875ac, size 0x54, virtual false, abstract: false, final false
  inline bool get_isValid();

  static inline void setStaticF_s_InvalidSampler(::UnityEngine::Profiling::Sampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sampler(Sampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sampler(Sampler const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Sampler, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Sampler, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::Sampler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Sampler*, "UnityEngine.Profiling", "Sampler");
