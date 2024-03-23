#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHttpResponseBody)
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class IHttpResponseBody;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::IHttpResponseBody);
// Type: Amazon.Runtime.Internal.Transform::IHttpResponseBody
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::IHttpResponseBody*
class CORDL_TYPE IHttpResponseBody {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method OpenResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* OpenResponse();

  /// @brief Method OpenResponseAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenResponseAsync();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpResponseBody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHttpResponseBody(IHttpResponseBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHttpResponseBody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHttpResponseBody(IHttpResponseBody const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::IHttpResponseBody);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::IHttpResponseBody*, "Amazon.Runtime.Internal.Transform", "IHttpResponseBody");
