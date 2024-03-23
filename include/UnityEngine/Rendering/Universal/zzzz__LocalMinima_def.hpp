#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMinima)
namespace UnityEngine::Rendering::Universal {
class TEdge;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class LocalMinima;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LocalMinima);
// Type: UnityEngine.Rendering.Universal::LocalMinima
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::LocalMinima*
class CORDL_TYPE LocalMinima : public ::System::Object {
public:
  // Declarations
  /// @brief Field LeftBound, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_LeftBound, put = __cordl_internal_set_LeftBound))::UnityEngine::Rendering::Universal::TEdge* LeftBound;

  /// @brief Field Next, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::UnityEngine::Rendering::Universal::LocalMinima* Next;

  /// @brief Field RightBound, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_RightBound, put = __cordl_internal_set_RightBound))::UnityEngine::Rendering::Universal::TEdge* RightBound;

  /// @brief Field Y, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Y, put = __cordl_internal_set_Y)) int64_t Y;

  static inline ::UnityEngine::Rendering::Universal::LocalMinima* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_LeftBound();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_LeftBound() const;

  constexpr ::UnityEngine::Rendering::Universal::LocalMinima*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LocalMinima*> const& __cordl_internal_get_Next() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_RightBound();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_RightBound() const;

  constexpr int64_t const& __cordl_internal_get_Y() const;

  constexpr int64_t& __cordl_internal_get_Y();

  constexpr void __cordl_internal_set_LeftBound(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_Next(::UnityEngine::Rendering::Universal::LocalMinima* value);

  constexpr void __cordl_internal_set_RightBound(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_Y(int64_t value);

  /// @brief Method .ctor, addr 0x1e22154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMinima();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalMinima", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalMinima(LocalMinima&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalMinima", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalMinima(LocalMinima const&) = delete;

  /// @brief Field Y, offset: 0x10, size: 0x8, def value: None
  int64_t ___Y;

  /// @brief Field LeftBound, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___LeftBound;

  /// @brief Field RightBound, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___RightBound;

  /// @brief Field Next, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LocalMinima* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LocalMinima, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LocalMinima, ___Y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LocalMinima, ___LeftBound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LocalMinima, ___RightBound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LocalMinima, ___Next) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LocalMinima);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LocalMinima*, "UnityEngine.Rendering.Universal", "LocalMinima");
