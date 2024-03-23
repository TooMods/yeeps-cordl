#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Profiling/zzzz__Sampler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomSampler)
// Forward declare root types
namespace UnityEngine::Profiling {
class CustomSampler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::CustomSampler);
// Type: UnityEngine.Profiling::CustomSampler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: ::UnityEngine.Profiling::CustomSampler*
class CORDL_TYPE CustomSampler : public ::UnityEngine::Profiling::Sampler {
public:
  // Declarations
  /// @brief Field s_InvalidCustomSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InvalidCustomSampler, put = setStaticF_s_InvalidCustomSampler))::UnityEngine::Profiling::CustomSampler* s_InvalidCustomSampler;

  /// @brief Method Create, addr 0x2a8786c, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Profiling::CustomSampler* Create(::StringW name, bool collectGpuData);

  static inline ::UnityEngine::Profiling::CustomSampler* New_ctor();

  static inline ::UnityEngine::Profiling::CustomSampler* New_ctor(void* ptr);

  /// @brief Method .ctor, addr 0x2a877a8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a87800, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(void* ptr);

  static inline ::UnityEngine::Profiling::CustomSampler* getStaticF_s_InvalidCustomSampler();

  static inline void setStaticF_s_InvalidCustomSampler(::UnityEngine::Profiling::CustomSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomSampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomSampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomSampler(CustomSampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomSampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomSampler(CustomSampler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::CustomSampler, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::CustomSampler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::CustomSampler*, "UnityEngine.Profiling", "CustomSampler");
