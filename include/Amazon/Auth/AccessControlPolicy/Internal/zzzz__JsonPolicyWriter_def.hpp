#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonPolicyWriter)
namespace Amazon::Auth::AccessControlPolicy {
class Condition;
}
namespace Amazon::Auth::AccessControlPolicy {
class Policy;
}
namespace Amazon::Auth::AccessControlPolicy {
class Statement;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::Internal {
class JsonPolicyWriter;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter);
// Type: Amazon.Auth.AccessControlPolicy.Internal::JsonPolicyWriter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::Internal {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.Internal::JsonPolicyWriter*
class CORDL_TYPE JsonPolicyWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Method WritePolicyToString, addr 0x25eb208, size 0x268, virtual false, abstract: false, final false
  static inline ::StringW WritePolicyToString(bool prettyPrint, ::Amazon::Auth::AccessControlPolicy::Policy* policy);

  /// @brief Method sortConditionsByTypeAndKey, addr 0x25f1124, size 0x57c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>*
  sortConditionsByTypeAndKey(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* conditions);

  /// @brief Method writeActions, addr 0x25eff78, size 0x48c, virtual false, abstract: false, final false
  static inline void writeActions(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonWriter* generator);

  /// @brief Method writeConditions, addr 0x25f0890, size 0x894, virtual false, abstract: false, final false
  static inline void writeConditions(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonWriter* generator);

  /// @brief Method writePolicy, addr 0x25ef0e4, size 0x4a8, virtual false, abstract: false, final false
  static inline void writePolicy(::Amazon::Auth::AccessControlPolicy::Policy* policy, ::ThirdParty::Json::LitJson::JsonWriter* generator);

  /// @brief Method writePrincipals, addr 0x25ef5c4, size 0x9b4, virtual false, abstract: false, final false
  static inline void writePrincipals(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonWriter* generator);

  /// @brief Method writePropertyValue, addr 0x25ef58c, size 0x38, virtual false, abstract: false, final false
  static inline void writePropertyValue(::ThirdParty::Json::LitJson::JsonWriter* generator, ::StringW propertyName, ::StringW value);

  /// @brief Method writeResources, addr 0x25f0404, size 0x48c, virtual false, abstract: false, final false
  static inline void writeResources(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonWriter* generator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPolicyWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonPolicyWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPolicyWriter(JsonPolicyWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPolicyWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPolicyWriter(JsonPolicyWriter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::Internal
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*, "Amazon.Auth.AccessControlPolicy.Internal", "JsonPolicyWriter");
