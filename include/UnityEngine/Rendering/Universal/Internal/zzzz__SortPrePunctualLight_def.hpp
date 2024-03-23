#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortPrePunctualLight)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __DeferredTiler__PrePunctualLight;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class SortPrePunctualLight;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight);
// Type: UnityEngine.Rendering.Universal.Internal::SortPrePunctualLight
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::SortPrePunctualLight*
class CORDL_TYPE SortPrePunctualLight : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>*() noexcept;

  /// @brief Method Compare, addr 0x2adfe50, size 0x20, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight a, ::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight b);

  static inline ::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight* New_ctor();

  /// @brief Method .ctor, addr 0x2adbe18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::Internal::__DeferredTiler__PrePunctualLight>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__Rendering__Universal__Internal____DeferredTiler__PrePunctualLight_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortPrePunctualLight();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortPrePunctualLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortPrePunctualLight(SortPrePunctualLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortPrePunctualLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortPrePunctualLight(SortPrePunctualLight const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::SortPrePunctualLight*, "UnityEngine.Rendering.Universal.Internal", "SortPrePunctualLight");
