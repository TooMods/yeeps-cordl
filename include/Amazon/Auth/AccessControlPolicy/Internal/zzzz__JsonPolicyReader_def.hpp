#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonPolicyReader)
namespace Amazon::Auth::AccessControlPolicy {
class Policy;
}
namespace Amazon::Auth::AccessControlPolicy {
class Statement;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::Internal {
class JsonPolicyReader;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader);
// Type: Amazon.Auth.AccessControlPolicy.Internal::JsonPolicyReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::Internal {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.Internal::JsonPolicyReader*
class CORDL_TYPE JsonPolicyReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadJsonStringToPolicy, addr 0x25eb474, size 0x4b8, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Policy* ReadJsonStringToPolicy(::StringW jsonString);

  /// @brief Method convertActions, addr 0x25eca08, size 0x534, virtual false, abstract: false, final false
  static inline void convertActions(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonData* jStatement);

  /// @brief Method convertCondition, addr 0x25ed470, size 0x394, virtual false, abstract: false, final false
  static inline void convertCondition(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonData* jStatement);

  /// @brief Method convertConditionRecord, addr 0x25ee4fc, size 0xbe8, virtual false, abstract: false, final false
  static inline void convertConditionRecord(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonData* jCondition);

  /// @brief Method convertPrincipalRecord, addr 0x25edcb4, size 0x848, virtual false, abstract: false, final false
  static inline void convertPrincipalRecord(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonData* jPrincipal);

  /// @brief Method convertPrincipals, addr 0x25ed804, size 0x4b0, virtual false, abstract: false, final false
  static inline void convertPrincipals(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonData* jStatement);

  /// @brief Method convertResources, addr 0x25ecf3c, size 0x534, virtual false, abstract: false, final false
  static inline void convertResources(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonData* jStatement);

  /// @brief Method convertStatement, addr 0x25ec864, size 0x1a4, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Statement* convertStatement(::ThirdParty::Json::LitJson::JsonData* jStatement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPolicyReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonPolicyReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPolicyReader(JsonPolicyReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPolicyReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPolicyReader(JsonPolicyReader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::Internal
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*, "Amazon.Auth.AccessControlPolicy.Internal", "JsonPolicyReader");
