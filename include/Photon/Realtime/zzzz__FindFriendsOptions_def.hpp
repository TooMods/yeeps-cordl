#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FindFriendsOptions)
// Forward declare root types
namespace Photon::Realtime {
class FindFriendsOptions;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::FindFriendsOptions);
// Type: Photon.Realtime::FindFriendsOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::FindFriendsOptions*
class CORDL_TYPE FindFriendsOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field CreatedOnGs, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_CreatedOnGs, put = __cordl_internal_set_CreatedOnGs)) bool CreatedOnGs;

  /// @brief Field Open, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_Open, put = __cordl_internal_set_Open)) bool Open;

  /// @brief Field Visible, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_Visible, put = __cordl_internal_set_Visible)) bool Visible;

  static inline ::Photon::Realtime::FindFriendsOptions* New_ctor();

  /// @brief Method ToIntFlags, addr 0x2246a54, size 0x28, virtual false, abstract: false, final false
  inline int32_t ToIntFlags();

  constexpr bool const& __cordl_internal_get_CreatedOnGs() const;

  constexpr bool& __cordl_internal_get_CreatedOnGs();

  constexpr bool const& __cordl_internal_get_Open() const;

  constexpr bool& __cordl_internal_get_Open();

  constexpr bool const& __cordl_internal_get_Visible() const;

  constexpr bool& __cordl_internal_get_Visible();

  constexpr void __cordl_internal_set_CreatedOnGs(bool value);

  constexpr void __cordl_internal_set_Open(bool value);

  constexpr void __cordl_internal_set_Visible(bool value);

  /// @brief Method .ctor, addr 0x2247c24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FindFriendsOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FindFriendsOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FindFriendsOptions(FindFriendsOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FindFriendsOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FindFriendsOptions(FindFriendsOptions const&) = delete;

  /// @brief Field CreatedOnGs, offset: 0x10, size: 0x1, def value: None
  bool ___CreatedOnGs;

  /// @brief Field Visible, offset: 0x11, size: 0x1, def value: None
  bool ___Visible;

  /// @brief Field Open, offset: 0x12, size: 0x1, def value: None
  bool ___Open;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::FindFriendsOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::FindFriendsOptions, ___CreatedOnGs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::FindFriendsOptions, ___Visible) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::FindFriendsOptions, ___Open) == 0x12, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::FindFriendsOptions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::FindFriendsOptions*, "Photon.Realtime", "FindFriendsOptions");
