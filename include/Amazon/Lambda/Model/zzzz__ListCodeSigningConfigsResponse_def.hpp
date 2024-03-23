#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListCodeSigningConfigsResponse)
namespace Amazon::Lambda::Model {
class CodeSigningConfig;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListCodeSigningConfigsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListCodeSigningConfigsResponse);
// Type: Amazon.Lambda.Model::ListCodeSigningConfigsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListCodeSigningConfigsResponse*
class CORDL_TYPE ListCodeSigningConfigsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_CodeSigningConfigs, put = set_CodeSigningConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* CodeSigningConfigs;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _codeSigningConfigs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__codeSigningConfigs,
                      put = __cordl_internal_set__codeSigningConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* _codeSigningConfigs;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetCodeSigningConfigs, addr 0x2bcd5b0, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetCodeSigningConfigs();

  /// @brief Method IsSetNextMarker, addr 0x2bcd614, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListCodeSigningConfigsResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*& __cordl_internal_get__codeSigningConfigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>*> const& __cordl_internal_get__codeSigningConfigs() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__codeSigningConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bcd624, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CodeSigningConfigs, addr 0x2bcd5a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* get_CodeSigningConfigs();

  /// @brief Method get_NextMarker, addr 0x2bcd604, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_CodeSigningConfigs, addr 0x2bcd5a8, size 0x8, virtual false, abstract: false, final false
  inline void set_CodeSigningConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* value);

  /// @brief Method set_NextMarker, addr 0x2bcd60c, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListCodeSigningConfigsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListCodeSigningConfigsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListCodeSigningConfigsResponse(ListCodeSigningConfigsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListCodeSigningConfigsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListCodeSigningConfigsResponse(ListCodeSigningConfigsResponse const&) = delete;

  /// @brief Field _codeSigningConfigs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::CodeSigningConfig*>* ____codeSigningConfigs;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListCodeSigningConfigsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListCodeSigningConfigsResponse, ____codeSigningConfigs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListCodeSigningConfigsResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListCodeSigningConfigsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListCodeSigningConfigsResponse*, "Amazon.Lambda.Model", "ListCodeSigningConfigsResponse");
