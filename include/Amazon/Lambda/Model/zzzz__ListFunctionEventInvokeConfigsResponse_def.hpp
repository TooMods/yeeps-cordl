#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListFunctionEventInvokeConfigsResponse)
namespace Amazon::Lambda::Model {
class FunctionEventInvokeConfig;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListFunctionEventInvokeConfigsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse);
// Type: Amazon.Lambda.Model::ListFunctionEventInvokeConfigsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListFunctionEventInvokeConfigsResponse*
class CORDL_TYPE ListFunctionEventInvokeConfigsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_FunctionEventInvokeConfigs,
                      put = set_FunctionEventInvokeConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* FunctionEventInvokeConfigs;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _functionEventInvokeConfigs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__functionEventInvokeConfigs,
                      put = __cordl_internal_set__functionEventInvokeConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* _functionEventInvokeConfigs;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetFunctionEventInvokeConfigs, addr 0x2bcda20, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetFunctionEventInvokeConfigs();

  /// @brief Method IsSetNextMarker, addr 0x2bcda84, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>*& __cordl_internal_get__functionEventInvokeConfigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>*> const&
  __cordl_internal_get__functionEventInvokeConfigs() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__functionEventInvokeConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bcda94, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionEventInvokeConfigs, addr 0x2bcda10, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* get_FunctionEventInvokeConfigs();

  /// @brief Method get_NextMarker, addr 0x2bcda74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_FunctionEventInvokeConfigs, addr 0x2bcda18, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionEventInvokeConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* value);

  /// @brief Method set_NextMarker, addr 0x2bcda7c, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListFunctionEventInvokeConfigsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionEventInvokeConfigsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListFunctionEventInvokeConfigsResponse(ListFunctionEventInvokeConfigsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionEventInvokeConfigsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListFunctionEventInvokeConfigsResponse(ListFunctionEventInvokeConfigsResponse const&) = delete;

  /// @brief Field _functionEventInvokeConfigs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionEventInvokeConfig*>* ____functionEventInvokeConfigs;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse, ____functionEventInvokeConfigs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListFunctionEventInvokeConfigsResponse*, "Amazon.Lambda.Model", "ListFunctionEventInvokeConfigsResponse");
