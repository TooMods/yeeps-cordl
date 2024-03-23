#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusAccountData)
// Forward declare root types
namespace GlobalNamespace {
struct OculusAccountData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OculusAccountData);
// Type: ::OculusAccountData
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OculusAccountData
struct CORDL_TYPE OculusAccountData {
public:
  // Declarations
  /// @brief Method ConstructAccountID, addr 0x2c860a4, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ConstructAccountID(uint64_t oculusIDRaw);

  /// @brief Method ConstructEditorOculusData, addr 0x2c864cc, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OculusAccountData ConstructEditorOculusData(::StringW hardcodedAccountID, ::StringW oculusID, ::StringW displayName);

  /// @brief Method ConstructTrueOculusData, addr 0x2c8650c, size 0x60, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OculusAccountData ConstructTrueOculusData(uint64_t accountIDRaw, ::StringW oculusID, ::StringW displayName);

  /// @brief Method IsValid, addr 0x2c8656c, size 0x4c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method TryExtractOculusUserID, addr 0x2c862d0, size 0x94, virtual false, abstract: false, final false
  static inline bool TryExtractOculusUserID(::StringW accountID, ByRef<uint64_t> oculusIDRaw);

  /// @brief Method NULL, addr 0x2c865b8, size 0x28, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OculusAccountData _cordl_NULL();

  /// @brief Method .ctor, addr 0x2c8648c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW accountID, ::StringW oculusNumber, ::StringW oculusID, ::StringW displayName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusAccountData();

  // Ctor Parameters [CppParam { name: "oculusNumber", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "oculusID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr OculusAccountData(::StringW oculusNumber, ::StringW accountID, ::StringW oculusID, ::StringW displayName) noexcept;

  /// @brief Field oculusNumber, offset: 0x0, size: 0x8, def value: None
  ::StringW oculusNumber;

  /// @brief Field accountID, offset: 0x8, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field oculusID, offset: 0x10, size: 0x8, def value: None
  ::StringW oculusID;

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field oculusIDpreface offset 0xffffffff size 0x8
  static constexpr ::ConstString oculusIDpreface{ u"o_" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusAccountData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAccountData, oculusNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAccountData, accountID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAccountData, oculusID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusAccountData, displayName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAccountData, "", "OculusAccountData");
