#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrcCalculatorStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace ThirdParty::Ionic::Zlib {
class CRC32;
}
// Forward declare root types
namespace ThirdParty::Ionic::Zlib {
class CrcCalculatorStream;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Ionic::Zlib::CrcCalculatorStream);
// Type: ThirdParty.Ionic.Zlib::CrcCalculatorStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Ionic::Zlib {
// Is value type: false
// CS Name: ::ThirdParty.Ionic.Zlib::CrcCalculatorStream*
class CORDL_TYPE CrcCalculatorStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Crc32)) int32_t Crc32;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_TotalBytesSlurped)) int64_t TotalBytesSlurped;

  /// @brief Field _Crc32, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Crc32, put = __cordl_internal_set__Crc32))::ThirdParty::Ionic::Zlib::CRC32* _Crc32;

  /// @brief Field _InnerStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InnerStream, put = __cordl_internal_set__InnerStream))::System::IO::Stream* _InnerStream;

  /// @brief Field _length, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int64_t _length;

  /// @brief Method Flush, addr 0x14b38b0, size 0x24, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* New_ctor(::System::IO::Stream* stream);

  static inline ::ThirdParty::Ionic::Zlib::CrcCalculatorStream* New_ctor(::System::IO::Stream* stream, int64_t length);

  /// @brief Method Read, addr 0x14b3740, size 0xa0, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x14b3980, size 0x40, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x14b39c0, size 0x40, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x14b37e0, size 0x70, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  constexpr ::ThirdParty::Ionic::Zlib::CRC32*& __cordl_internal_get__Crc32();

  constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Ionic::Zlib::CRC32*> const& __cordl_internal_get__Crc32() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__InnerStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__InnerStream() const;

  constexpr int64_t const& __cordl_internal_get__length() const;

  constexpr int64_t& __cordl_internal_get__length();

  constexpr void __cordl_internal_set__Crc32(::ThirdParty::Ionic::Zlib::CRC32* value);

  constexpr void __cordl_internal_set__InnerStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__length(int64_t value);

  /// @brief Method .ctor, addr 0x14b35cc, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x14b3674, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, int64_t length);

  /// @brief Method get_CanRead, addr 0x14b3850, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x14b3870, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x14b3890, size 0x20, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Crc32, addr 0x14b3720, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_Crc32();

  /// @brief Method get_Length, addr 0x14b38d4, size 0x50, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x14b3924, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_TotalBytesSlurped, addr 0x14b35b0, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_TotalBytesSlurped();

  /// @brief Method set_Position, addr 0x14b3940, size 0x40, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrcCalculatorStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrcCalculatorStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrcCalculatorStream(CrcCalculatorStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrcCalculatorStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrcCalculatorStream(CrcCalculatorStream const&) = delete;

  /// @brief Field _InnerStream, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ____InnerStream;

  /// @brief Field _Crc32, offset: 0x30, size: 0x8, def value: None
  ::ThirdParty::Ionic::Zlib::CRC32* ____Crc32;

  /// @brief Field _length, offset: 0x38, size: 0x8, def value: None
  int64_t ____length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Ionic::Zlib::CrcCalculatorStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Ionic::Zlib::CrcCalculatorStream, ____InnerStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Ionic::Zlib::CrcCalculatorStream, ____Crc32) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Ionic::Zlib::CrcCalculatorStream, ____length) == 0x38, "Offset mismatch!");

} // namespace ThirdParty::Ionic::Zlib
NEED_NO_BOX(::ThirdParty::Ionic::Zlib::CrcCalculatorStream);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Ionic::Zlib::CrcCalculatorStream*, "ThirdParty.Ionic.Zlib", "CrcCalculatorStream");
