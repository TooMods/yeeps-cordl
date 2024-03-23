#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__HashStream_1_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__HashingWrapperMD5_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5Stream)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class MD5Stream;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::MD5Stream);
// Type: Amazon.Runtime.Internal.Util::MD5Stream
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::MD5Stream*
class CORDL_TYPE MD5Stream : public ::Amazon::Runtime::Internal::Util::HashStream_1<::Amazon::Runtime::Internal::Util::HashingWrapperMD5*> {
public:
  // Declarations
  /// @brief Field _logger, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::Amazon::Runtime::Internal::Util::Logger* _logger;

  static inline ::Amazon::Runtime::Internal::Util::MD5Stream* New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> expectedHash, int64_t expectedLength);

  constexpr ::Amazon::Runtime::Internal::Util::Logger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& __cordl_internal_get__logger() const;

  constexpr void __cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value);

  /// @brief Method .ctor, addr 0x2439c00, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> expectedHash, int64_t expectedLength);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD5Stream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD5Stream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD5Stream(MD5Stream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD5Stream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD5Stream(MD5Stream const&) = delete;

  /// @brief Field _logger, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::Logger* ____logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::MD5Stream, 0x60>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::MD5Stream, ____logger) == 0x58, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::MD5Stream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::MD5Stream*, "Amazon.Runtime.Internal.Util", "MD5Stream");
