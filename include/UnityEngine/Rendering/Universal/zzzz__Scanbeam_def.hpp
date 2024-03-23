#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Scanbeam)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Scanbeam;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Scanbeam);
// Type: UnityEngine.Rendering.Universal::Scanbeam
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Scanbeam*
class CORDL_TYPE Scanbeam : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::UnityEngine::Rendering::Universal::Scanbeam* Next;

  /// @brief Field Y, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Y, put = __cordl_internal_set_Y)) int64_t Y;

  static inline ::UnityEngine::Rendering::Universal::Scanbeam* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::Scanbeam*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Scanbeam*> const& __cordl_internal_get_Next() const;

  constexpr int64_t const& __cordl_internal_get_Y() const;

  constexpr int64_t& __cordl_internal_get_Y();

  constexpr void __cordl_internal_set_Next(::UnityEngine::Rendering::Universal::Scanbeam* value);

  constexpr void __cordl_internal_set_Y(int64_t value);

  /// @brief Method .ctor, addr 0x1e2215c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scanbeam();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scanbeam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scanbeam(Scanbeam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scanbeam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scanbeam(Scanbeam const&) = delete;

  /// @brief Field Y, offset: 0x10, size: 0x8, def value: None
  int64_t ___Y;

  /// @brief Field Next, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Scanbeam* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Scanbeam, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Scanbeam, ___Y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Scanbeam, ___Next) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Scanbeam);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Scanbeam*, "UnityEngine.Rendering.Universal", "Scanbeam");
