#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AddRoleUtility)
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace GlobalNamespace {
class AddRoleUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AddRoleUtility);
// Type: ::AddRoleUtility
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AddRoleUtility*
class CORDL_TYPE AddRoleUtility : public ::GlobalNamespace::LambdaDatabaseUtility {
public:
  // Declarations
  /// @brief Field inputs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inputs, put = __cordl_internal_set_inputs))::StringW inputs;

  /// @brief Field roleKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roleKey, put = __cordl_internal_set_roleKey))::StringW roleKey;

  /// @brief Field shouldStrip, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldStrip, put = __cordl_internal_set_shouldStrip)) bool shouldStrip;

  /// @brief Method GetFunctionEndpoint, addr 0x276b600, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetFunctionEndpoint();

  /// @brief Method GetInputJSON, addr 0x276b640, size 0x200, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* GetInputJSON(::StringW password);

  static inline ::GlobalNamespace::AddRoleUtility* New_ctor();

  /// @brief Method ParseJSONBody, addr 0x276b998, size 0x57c, virtual true, abstract: false, final false
  inline ::StringW ParseJSONBody(::OVRSimpleJSON::JSONNode* body);

  constexpr ::StringW const& __cordl_internal_get_inputs() const;

  constexpr ::StringW& __cordl_internal_get_inputs();

  constexpr ::StringW const& __cordl_internal_get_roleKey() const;

  constexpr ::StringW& __cordl_internal_get_roleKey();

  constexpr bool const& __cordl_internal_get_shouldStrip() const;

  constexpr bool& __cordl_internal_get_shouldStrip();

  constexpr void __cordl_internal_set_inputs(::StringW value);

  constexpr void __cordl_internal_set_roleKey(::StringW value);

  constexpr void __cordl_internal_set_shouldStrip(bool value);

  /// @brief Method .ctor, addr 0x276bf14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AddRoleUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AddRoleUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AddRoleUtility(AddRoleUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AddRoleUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AddRoleUtility(AddRoleUtility const&) = delete;

  /// @brief Field roleKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___roleKey;

  /// @brief Field inputs, offset: 0x28, size: 0x8, def value: None
  ::StringW ___inputs;

  /// @brief Field shouldStrip, offset: 0x30, size: 0x1, def value: None
  bool ___shouldStrip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AddRoleUtility, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AddRoleUtility, ___roleKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AddRoleUtility, ___inputs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AddRoleUtility, ___shouldStrip) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AddRoleUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AddRoleUtility*, "", "AddRoleUtility");
