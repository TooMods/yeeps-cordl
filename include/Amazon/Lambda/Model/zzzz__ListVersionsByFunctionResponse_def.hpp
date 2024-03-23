#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListVersionsByFunctionResponse)
namespace Amazon::Lambda::Model {
class FunctionConfiguration;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListVersionsByFunctionResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListVersionsByFunctionResponse);
// Type: Amazon.Lambda.Model::ListVersionsByFunctionResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListVersionsByFunctionResponse*
class CORDL_TYPE ListVersionsByFunctionResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  __declspec(property(get = get_Versions, put = set_Versions))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* Versions;

  /// @brief Field _nextMarker, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Field _versions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__versions, put = __cordl_internal_set__versions))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* _versions;

  /// @brief Method IsSetNextMarker, addr 0x2bce944, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  /// @brief Method IsSetVersions, addr 0x2bce964, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetVersions();

  static inline ::Amazon::Lambda::Model::ListVersionsByFunctionResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>*& __cordl_internal_get__versions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>*> const& __cordl_internal_get__versions() const;

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  constexpr void __cordl_internal_set__versions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* value);

  /// @brief Method .ctor, addr 0x2bce9b8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NextMarker, addr 0x2bce934, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method get_Versions, addr 0x2bce954, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* get_Versions();

  /// @brief Method set_NextMarker, addr 0x2bce93c, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

  /// @brief Method set_Versions, addr 0x2bce95c, size 0x8, virtual false, abstract: false, final false
  inline void set_Versions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListVersionsByFunctionResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListVersionsByFunctionResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListVersionsByFunctionResponse(ListVersionsByFunctionResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListVersionsByFunctionResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListVersionsByFunctionResponse(ListVersionsByFunctionResponse const&) = delete;

  /// @brief Field _nextMarker, offset: 0x28, size: 0x8, def value: None
  ::StringW ____nextMarker;

  /// @brief Field _versions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::FunctionConfiguration*>* ____versions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListVersionsByFunctionResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionResponse, ____nextMarker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionResponse, ____versions) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListVersionsByFunctionResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListVersionsByFunctionResponse*, "Amazon.Lambda.Model", "ListVersionsByFunctionResponse");
