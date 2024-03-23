#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Maxima)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Maxima;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Maxima);
// Type: UnityEngine.Rendering.Universal::Maxima
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Maxima*
class CORDL_TYPE Maxima : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::UnityEngine::Rendering::Universal::Maxima* Next;

  /// @brief Field Prev, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Prev, put = __cordl_internal_set_Prev))::UnityEngine::Rendering::Universal::Maxima* Prev;

  /// @brief Field X, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X)) int64_t X;

  static inline ::UnityEngine::Rendering::Universal::Maxima* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::Maxima*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Maxima*> const& __cordl_internal_get_Next() const;

  constexpr ::UnityEngine::Rendering::Universal::Maxima*& __cordl_internal_get_Prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Maxima*> const& __cordl_internal_get_Prev() const;

  constexpr int64_t const& __cordl_internal_get_X() const;

  constexpr int64_t& __cordl_internal_get_X();

  constexpr void __cordl_internal_set_Next(::UnityEngine::Rendering::Universal::Maxima* value);

  constexpr void __cordl_internal_set_Prev(::UnityEngine::Rendering::Universal::Maxima* value);

  constexpr void __cordl_internal_set_X(int64_t value);

  /// @brief Method .ctor, addr 0x1e22164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Maxima();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Maxima", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Maxima(Maxima&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Maxima", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Maxima(Maxima const&) = delete;

  /// @brief Field X, offset: 0x10, size: 0x8, def value: None
  int64_t ___X;

  /// @brief Field Next, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Maxima* ___Next;

  /// @brief Field Prev, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Maxima* ___Prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Maxima, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Maxima, ___X) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Maxima, ___Next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Maxima, ___Prev) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Maxima);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Maxima*, "UnityEngine.Rendering.Universal", "Maxima");
