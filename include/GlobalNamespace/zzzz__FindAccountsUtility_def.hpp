#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LambdaDatabaseUtility_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FindAccountsUtility)
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace GlobalNamespace {
class FindAccountsUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FindAccountsUtility);
// Type: ::FindAccountsUtility
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FindAccountsUtility*
class CORDL_TYPE FindAccountsUtility : public ::GlobalNamespace::LambdaDatabaseUtility {
public:
  // Declarations
  /// @brief Field inputs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inputs, put = __cordl_internal_set_inputs))::StringW inputs;

  /// @brief Field useExact, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_useExact, put = __cordl_internal_set_useExact)) bool useExact;

  /// @brief Method GetFunctionEndpoint, addr 0x276ca8c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetFunctionEndpoint();

  /// @brief Method GetInputJSON, addr 0x276cacc, size 0x1b4, virtual true, abstract: false, final false
  inline ::OVRSimpleJSON::JSONNode* GetInputJSON(::StringW password);

  static inline ::GlobalNamespace::FindAccountsUtility* New_ctor();

  /// @brief Method ParseJSONBody, addr 0x276cc80, size 0x5c4, virtual true, abstract: false, final false
  inline ::StringW ParseJSONBody(::OVRSimpleJSON::JSONNode* body);

  constexpr ::StringW const& __cordl_internal_get_inputs() const;

  constexpr ::StringW& __cordl_internal_get_inputs();

  constexpr bool const& __cordl_internal_get_useExact() const;

  constexpr bool& __cordl_internal_get_useExact();

  constexpr void __cordl_internal_set_inputs(::StringW value);

  constexpr void __cordl_internal_set_useExact(bool value);

  /// @brief Method .ctor, addr 0x276d244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FindAccountsUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FindAccountsUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FindAccountsUtility(FindAccountsUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FindAccountsUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FindAccountsUtility(FindAccountsUtility const&) = delete;

  /// @brief Field inputs, offset: 0x20, size: 0x8, def value: None
  ::StringW ___inputs;

  /// @brief Field useExact, offset: 0x28, size: 0x1, def value: None
  bool ___useExact;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FindAccountsUtility, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FindAccountsUtility, ___inputs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FindAccountsUtility, ___useExact) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FindAccountsUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FindAccountsUtility*, "", "FindAccountsUtility");
