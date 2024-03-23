#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListFunctionsByCodeSigningConfigResponse)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListFunctionsByCodeSigningConfigResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse);
// Type: Amazon.Lambda.Model::ListFunctionsByCodeSigningConfigResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListFunctionsByCodeSigningConfigResponse*
class CORDL_TYPE ListFunctionsByCodeSigningConfigResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_FunctionArns, put = set_FunctionArns))::System::Collections::Generic::List_1<::StringW>* FunctionArns;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _functionArns, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__functionArns, put = __cordl_internal_set__functionArns))::System::Collections::Generic::List_1<::StringW>* _functionArns;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetFunctionArns, addr 0x2bcdc48, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFunctionArns();

  /// @brief Method IsSetNextMarker, addr 0x2bcdcac, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__functionArns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__functionArns() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__functionArns(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bcdcbc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionArns, addr 0x2bcdc38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_FunctionArns();

  /// @brief Method get_NextMarker, addr 0x2bcdc9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_FunctionArns, addr 0x2bcdc40, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionArns(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_NextMarker, addr 0x2bcdca4, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListFunctionsByCodeSigningConfigResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsByCodeSigningConfigResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListFunctionsByCodeSigningConfigResponse(ListFunctionsByCodeSigningConfigResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsByCodeSigningConfigResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListFunctionsByCodeSigningConfigResponse(ListFunctionsByCodeSigningConfigResponse const&) = delete;

  /// @brief Field _functionArns, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____functionArns;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse, ____functionArns) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListFunctionsByCodeSigningConfigResponse*, "Amazon.Lambda.Model", "ListFunctionsByCodeSigningConfigResponse");
