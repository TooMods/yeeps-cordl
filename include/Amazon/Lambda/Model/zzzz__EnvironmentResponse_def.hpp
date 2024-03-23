#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentResponse)
namespace Amazon::Lambda::Model {
class EnvironmentError;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class EnvironmentResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::EnvironmentResponse);
// Type: Amazon.Lambda.Model::EnvironmentResponse
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::EnvironmentResponse*
class CORDL_TYPE EnvironmentResponse : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Error, put = set_Error))::Amazon::Lambda::Model::EnvironmentError* Error;

  __declspec(property(get = get_Variables, put = set_Variables))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Variables;

  /// @brief Field _error, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__error, put = __cordl_internal_set__error))::Amazon::Lambda::Model::EnvironmentError* _error;

  /// @brief Field _variables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__variables, put = __cordl_internal_set__variables))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _variables;

  /// @brief Method IsSetError, addr 0x2bc7fc4, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetError();

  /// @brief Method IsSetVariables, addr 0x2bc7fe4, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetVariables();

  static inline ::Amazon::Lambda::Model::EnvironmentResponse* New_ctor();

  constexpr ::Amazon::Lambda::Model::EnvironmentError*& __cordl_internal_get__error();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::EnvironmentError*> const& __cordl_internal_get__error() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__variables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__variables() const;

  constexpr void __cordl_internal_set__error(::Amazon::Lambda::Model::EnvironmentError* value);

  constexpr void __cordl_internal_set__variables(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x2bc803c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Error, addr 0x2bc7fb4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::EnvironmentError* get_Error();

  /// @brief Method get_Variables, addr 0x2bc7fd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Variables();

  /// @brief Method set_Error, addr 0x2bc7fbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Error(::Amazon::Lambda::Model::EnvironmentError* value);

  /// @brief Method set_Variables, addr 0x2bc7fdc, size 0x8, virtual false, abstract: false, final false
  inline void set_Variables(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentResponse(EnvironmentResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentResponse(EnvironmentResponse const&) = delete;

  /// @brief Field _error, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Lambda::Model::EnvironmentError* ____error;

  /// @brief Field _variables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____variables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::EnvironmentResponse, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EnvironmentResponse, ____error) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::EnvironmentResponse, ____variables) == 0x18, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::EnvironmentResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::EnvironmentResponse*, "Amazon.Lambda.Model", "EnvironmentResponse");
