#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Environment)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class Environment;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::Environment);
// Type: Amazon.Lambda.Model::Environment
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::Environment*
class CORDL_TYPE Environment : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsVariablesSet, put = set_IsVariablesSet)) bool IsVariablesSet;

  __declspec(property(get = get_Variables, put = set_Variables))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Variables;

  /// @brief Field _variables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__variables, put = __cordl_internal_set__variables))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _variables;

  /// @brief Method IsSetVariables, addr 0x2bc7eec, size 0x4, virtual false, abstract: false, final false
  inline bool IsSetVariables();

  static inline ::Amazon::Lambda::Model::Environment* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__variables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__variables() const;

  constexpr void __cordl_internal_set__variables(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x2bc7ef0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsVariablesSet, addr 0x2bc7dfc, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsVariablesSet();

  /// @brief Method get_Variables, addr 0x2bc7dec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Variables();

  /// @brief Method set_IsVariablesSet, addr 0x2bc7e6c, size 0x80, virtual false, abstract: false, final false
  inline void set_IsVariablesSet(bool value);

  /// @brief Method set_Variables, addr 0x2bc7df4, size 0x8, virtual false, abstract: false, final false
  inline void set_Variables(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Environment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Environment(Environment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Environment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Environment(Environment const&) = delete;

  /// @brief Field _variables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____variables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::Environment, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::Environment, ____variables) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::Environment);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::Environment*, "Amazon.Lambda.Model", "Environment");
