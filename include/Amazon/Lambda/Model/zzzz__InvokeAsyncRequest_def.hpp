#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvokeAsyncRequest)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class InvokeAsyncRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::InvokeAsyncRequest);
// Type: Amazon.Lambda.Model::InvokeAsyncRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::InvokeAsyncRequest*
class CORDL_TYPE InvokeAsyncRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_InvokeArgs, put = set_InvokeArgs))::StringW InvokeArgs;

  __declspec(property(get = get_InvokeArgsStream, put = set_InvokeArgsStream))::System::IO::Stream* InvokeArgsStream;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _invokeArgsStream, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__invokeArgsStream, put = __cordl_internal_set__invokeArgsStream))::System::IO::Stream* _invokeArgsStream;

  /// @brief Method IsSetFunctionName, addr 0x2bc3688, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetInvokeArgsStream, addr 0x2bc36a8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetInvokeArgsStream();

  static inline ::Amazon::Lambda::Model::InvokeAsyncRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::System::IO::Stream*& __cordl_internal_get__invokeArgsStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__invokeArgsStream() const;

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__invokeArgsStream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x2bc36b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x2bc3678, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_InvokeArgs, addr 0x2bc355c, size 0xac, virtual false, abstract: false, final false
  inline ::StringW get_InvokeArgs();

  /// @brief Method get_InvokeArgsStream, addr 0x2bc3698, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_InvokeArgsStream();

  /// @brief Method set_FunctionName, addr 0x2bc3680, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_InvokeArgs, addr 0x2bc3608, size 0x70, virtual false, abstract: false, final false
  inline void set_InvokeArgs(::StringW value);

  /// @brief Method set_InvokeArgsStream, addr 0x2bc36a0, size 0x8, virtual false, abstract: false, final false
  inline void set_InvokeArgsStream(::System::IO::Stream* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeAsyncRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeAsyncRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeAsyncRequest(InvokeAsyncRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeAsyncRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeAsyncRequest(InvokeAsyncRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _invokeArgsStream, offset: 0x40, size: 0x8, def value: None
  ::System::IO::Stream* ____invokeArgsStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::InvokeAsyncRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeAsyncRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::InvokeAsyncRequest, ____invokeArgsStream) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::InvokeAsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::InvokeAsyncRequest*, "Amazon.Lambda.Model", "InvokeAsyncRequest");
