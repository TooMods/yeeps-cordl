#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetFunctionResponse)
namespace Amazon::Lambda::Model {
class Concurrency;
}
namespace Amazon::Lambda::Model {
class FunctionCodeLocation;
}
namespace Amazon::Lambda::Model {
class FunctionConfiguration;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class GetFunctionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::GetFunctionResponse);
// Type: Amazon.Lambda.Model::GetFunctionResponse
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::GetFunctionResponse*
class CORDL_TYPE GetFunctionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Code, put = set_Code))::Amazon::Lambda::Model::FunctionCodeLocation* Code;

  __declspec(property(get = get_Concurrency, put = set_Concurrency))::Amazon::Lambda::Model::Concurrency* Concurrency;

  __declspec(property(get = get_Configuration, put = set_Configuration))::Amazon::Lambda::Model::FunctionConfiguration* Configuration;

  __declspec(property(get = get_Tags, put = set_Tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Tags;

  /// @brief Field _code, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code))::Amazon::Lambda::Model::FunctionCodeLocation* _code;

  /// @brief Field _concurrency, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__concurrency, put = __cordl_internal_set__concurrency))::Amazon::Lambda::Model::Concurrency* _concurrency;

  /// @brief Field _configuration, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration))::Amazon::Lambda::Model::FunctionConfiguration* _configuration;

  /// @brief Field _tags, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tags, put = __cordl_internal_set__tags))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _tags;

  /// @brief Method IsSetCode, addr 0x2bcb6c0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetCode();

  /// @brief Method IsSetConcurrency, addr 0x2bcb6e0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConcurrency();

  /// @brief Method IsSetConfiguration, addr 0x2bcb700, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetConfiguration();

  /// @brief Method IsSetTags, addr 0x2bcb720, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetTags();

  static inline ::Amazon::Lambda::Model::GetFunctionResponse* New_ctor();

  constexpr ::Amazon::Lambda::Model::FunctionCodeLocation*& __cordl_internal_get__code();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::FunctionCodeLocation*> const& __cordl_internal_get__code() const;

  constexpr ::Amazon::Lambda::Model::Concurrency*& __cordl_internal_get__concurrency();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::Concurrency*> const& __cordl_internal_get__concurrency() const;

  constexpr ::Amazon::Lambda::Model::FunctionConfiguration*& __cordl_internal_get__configuration();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::FunctionConfiguration*> const& __cordl_internal_get__configuration() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__tags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__tags() const;

  constexpr void __cordl_internal_set__code(::Amazon::Lambda::Model::FunctionCodeLocation* value);

  constexpr void __cordl_internal_set__concurrency(::Amazon::Lambda::Model::Concurrency* value);

  constexpr void __cordl_internal_set__configuration(::Amazon::Lambda::Model::FunctionConfiguration* value);

  constexpr void __cordl_internal_set__tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x2bcb778, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Code, addr 0x2bcb6b0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::FunctionCodeLocation* get_Code();

  /// @brief Method get_Concurrency, addr 0x2bcb6d0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::Concurrency* get_Concurrency();

  /// @brief Method get_Configuration, addr 0x2bcb6f0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::Model::FunctionConfiguration* get_Configuration();

  /// @brief Method get_Tags, addr 0x2bcb710, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Tags();

  /// @brief Method set_Code, addr 0x2bcb6b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Code(::Amazon::Lambda::Model::FunctionCodeLocation* value);

  /// @brief Method set_Concurrency, addr 0x2bcb6d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Concurrency(::Amazon::Lambda::Model::Concurrency* value);

  /// @brief Method set_Configuration, addr 0x2bcb6f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Configuration(::Amazon::Lambda::Model::FunctionConfiguration* value);

  /// @brief Method set_Tags, addr 0x2bcb718, size 0x8, virtual false, abstract: false, final false
  inline void set_Tags(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFunctionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFunctionResponse(GetFunctionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFunctionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFunctionResponse(GetFunctionResponse const&) = delete;

  /// @brief Field _code, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Lambda::Model::FunctionCodeLocation* ____code;

  /// @brief Field _concurrency, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Lambda::Model::Concurrency* ____concurrency;

  /// @brief Field _configuration, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::Model::FunctionConfiguration* ____configuration;

  /// @brief Field _tags, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::GetFunctionResponse, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionResponse, ____code) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionResponse, ____concurrency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionResponse, ____configuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::GetFunctionResponse, ____tags) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::GetFunctionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::GetFunctionResponse*, "Amazon.Lambda.Model", "GetFunctionResponse");
