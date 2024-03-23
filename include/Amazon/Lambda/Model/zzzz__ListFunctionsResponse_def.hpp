#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListFunctionsResponse)
namespace Amazon::Lambda::Model {
class FunctionConfiguration;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListFunctionsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListFunctionsResponse);
// Type: Amazon.Lambda.Model::ListFunctionsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListFunctionsResponse*
class CORDL_TYPE ListFunctionsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Functions, put = set_Functions))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* Functions;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _functions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__functions, put = __cordl_internal_set__functions))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* _functions;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetFunctions, addr 0x2bcded8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFunctions();

  /// @brief Method IsSetNextMarker, addr 0x2bcdf3c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListFunctionsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>*& __cordl_internal_get__functions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>*> const& __cordl_internal_get__functions() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__functions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bcdf4c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Functions, addr 0x2bcdec8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* get_Functions();

  /// @brief Method get_NextMarker, addr 0x2bcdf2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_Functions, addr 0x2bcded0, size 0x8, virtual false, abstract: false, final false
  inline void set_Functions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* value);

  /// @brief Method set_NextMarker, addr 0x2bcdf34, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListFunctionsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListFunctionsResponse(ListFunctionsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListFunctionsResponse(ListFunctionsResponse const&) = delete;

  /// @brief Field _functions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* ____functions;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListFunctionsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsResponse, ____functions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListFunctionsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListFunctionsResponse*, "Amazon.Lambda.Model", "ListFunctionsResponse");
