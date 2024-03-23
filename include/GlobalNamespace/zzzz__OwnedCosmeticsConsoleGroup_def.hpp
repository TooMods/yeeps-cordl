#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OwnedCosmeticsConsoleGroup)
namespace GlobalNamespace {
class OwnedCosmeticsConsole;
}
// Forward declare root types
namespace GlobalNamespace {
class OwnedCosmeticsConsoleGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OwnedCosmeticsConsoleGroup);
// Type: ::OwnedCosmeticsConsoleGroup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OwnedCosmeticsConsoleGroup*
class CORDL_TYPE OwnedCosmeticsConsoleGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field consoles, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_consoles,
                      put = __cordl_internal_set_consoles))::ArrayW<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>, ::Array<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>>*> consoles;

  /// @brief Field hasInitialized, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_hasInitialized, put = __cordl_internal_set_hasInitialized)) bool hasInitialized;

  /// @brief Field isActive, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Method Initialize, addr 0x154f74c, size 0x64, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::OwnedCosmeticsConsoleGroup* New_ctor();

  /// @brief Method OnDisable, addr 0x154f954, size 0x12c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDressingRoomModeUpdated, addr 0x154fa80, size 0x8, virtual false, abstract: false, final false
  inline void OnDressingRoomModeUpdated(bool newDressingRoomMode);

  /// @brief Method OnEnable, addr 0x154f7b0, size 0xfc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshActive, addr 0x154f8ac, size 0xa8, virtual false, abstract: false, final false
  inline void RefreshActive(bool forceSet);

  /// @brief Method SetActive, addr 0x154fa88, size 0x78, virtual false, abstract: false, final false
  inline void SetActive(bool newActive, bool forceSet);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>, ::Array<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>>*> const& __cordl_internal_get_consoles() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>, ::Array<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>>*>& __cordl_internal_get_consoles();

  constexpr bool const& __cordl_internal_get_hasInitialized() const;

  constexpr bool& __cordl_internal_get_hasInitialized();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr void __cordl_internal_set_consoles(::ArrayW<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>, ::Array<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>>*> value);

  constexpr void __cordl_internal_set_hasInitialized(bool value);

  constexpr void __cordl_internal_set_isActive(bool value);

  /// @brief Method .ctor, addr 0x154fb00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OwnedCosmeticsConsoleGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OwnedCosmeticsConsoleGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OwnedCosmeticsConsoleGroup(OwnedCosmeticsConsoleGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OwnedCosmeticsConsoleGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OwnedCosmeticsConsoleGroup(OwnedCosmeticsConsoleGroup const&) = delete;

  /// @brief Field consoles, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>, ::Array<::UnityW<::GlobalNamespace::OwnedCosmeticsConsole>>*> ___consoles;

  /// @brief Field hasInitialized, offset: 0x20, size: 0x1, def value: None
  bool ___hasInitialized;

  /// @brief Field isActive, offset: 0x21, size: 0x1, def value: None
  bool ___isActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OwnedCosmeticsConsoleGroup, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsoleGroup, ___consoles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsoleGroup, ___hasInitialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnedCosmeticsConsoleGroup, ___isActive) == 0x21, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OwnedCosmeticsConsoleGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwnedCosmeticsConsoleGroup*, "", "OwnedCosmeticsConsoleGroup");
