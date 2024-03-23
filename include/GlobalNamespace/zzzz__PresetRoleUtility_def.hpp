#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PresetRoleUtility)
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace GlobalNamespace {
class PresetRoleUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PresetRoleUtility);
// Type: ::PresetRoleUtility
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PresetRoleUtility*
class CORDL_TYPE PresetRoleUtility : public ::GlobalNamespace::LambdaDatabaseUtility {
public:
  // Declarations
  /// @brief Field inputs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inputs, put = __cordl_internal_set_inputs))::StringW inputs;

  /// @brief Field roleKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roleKey, put = __cordl_internal_set_roleKey))::StringW roleKey;

  /// @brief Method GetFunctionEndpoint, addr 0x276d748, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetFunctionEndpoint();

  /// @brief Method GetInputJSON, addr 0x276d788, size 0x188, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* GetInputJSON(::StringW password);

  static inline ::GlobalNamespace::PresetRoleUtility* New_ctor();

  /// @brief Method ParseJSONBody, addr 0x276d910, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ParseJSONBody(::OVRSimpleJSON::JSONNode* body);

  constexpr ::StringW const& __cordl_internal_get_inputs() const;

  constexpr ::StringW& __cordl_internal_get_inputs();

  constexpr ::StringW const& __cordl_internal_get_roleKey() const;

  constexpr ::StringW& __cordl_internal_get_roleKey();

  constexpr void __cordl_internal_set_inputs(::StringW value);

  constexpr void __cordl_internal_set_roleKey(::StringW value);

  /// @brief Method .ctor, addr 0x276d930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresetRoleUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PresetRoleUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresetRoleUtility(PresetRoleUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresetRoleUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresetRoleUtility(PresetRoleUtility const&) = delete;

  /// @brief Field roleKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___roleKey;

  /// @brief Field inputs, offset: 0x28, size: 0x8, def value: None
  ::StringW ___inputs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresetRoleUtility, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetRoleUtility, ___roleKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetRoleUtility, ___inputs) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresetRoleUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresetRoleUtility*, "", "PresetRoleUtility");
