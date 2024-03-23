#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_def.hpp"
CORDL_MODULE_EXPORT(NonDisposingWrapperStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class NonDisposingWrapperStream;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream);
// Type: Amazon.Runtime.Internal.Util::NonDisposingWrapperStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::NonDisposingWrapperStream*
class CORDL_TYPE NonDisposingWrapperStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x2443f70, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream* New_ctor(::System::IO::Stream* baseStream);

  /// @brief Method .ctor, addr 0x2443f6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonDisposingWrapperStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonDisposingWrapperStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonDisposingWrapperStream(NonDisposingWrapperStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonDisposingWrapperStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonDisposingWrapperStream(NonDisposingWrapperStream const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream, 0x30>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::NonDisposingWrapperStream*, "Amazon.Runtime.Internal.Util", "NonDisposingWrapperStream");
