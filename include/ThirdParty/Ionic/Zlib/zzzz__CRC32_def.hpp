#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CRC32)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ThirdParty::Ionic::Zlib {
class CRC32;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::Ionic::Zlib::CRC32);
// Type: ThirdParty.Ionic.Zlib::CRC32
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::Ionic::Zlib {
// Is value type: false
// CS Name: ::ThirdParty.Ionic.Zlib::CRC32*
class CORDL_TYPE CRC32 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Crc32Result)) int32_t Crc32Result;

  __declspec(property(get = get_TotalBytesRead)) int64_t TotalBytesRead;

  /// @brief Field _RunningCrc32Result, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__RunningCrc32Result, put = __cordl_internal_set__RunningCrc32Result)) uint32_t _RunningCrc32Result;

  /// @brief Field _TotalBytesRead, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__TotalBytesRead, put = __cordl_internal_set__TotalBytesRead)) int64_t _TotalBytesRead;

  /// @brief Field crc32Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crc32Table, put = setStaticF_crc32Table))::ArrayW<uint32_t, ::Array<uint32_t>*> crc32Table;

  /// @brief Method ComputeCrc32, addr 0x14b343c, size 0x4, virtual false, abstract: false, final false
  inline int32_t ComputeCrc32(int32_t W, uint8_t B);

  /// @brief Method GetCrc32, addr 0x14b320c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCrc32(::System::IO::Stream* input);

  /// @brief Method GetCrc32AndCopy, addr 0x14b3214, size 0x140, virtual false, abstract: false, final false
  inline int32_t GetCrc32AndCopy(::System::IO::Stream* input, ::System::IO::Stream* output);

  static inline ::ThirdParty::Ionic::Zlib::CRC32* New_ctor();

  /// @brief Method SlurpBlock, addr 0x14b3354, size 0xe8, virtual false, abstract: false, final false
  inline void SlurpBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t offset, int32_t count);

  /// @brief Method _InternalComputeCrc32, addr 0x14b3440, size 0x94, virtual false, abstract: false, final false
  inline int32_t _InternalComputeCrc32(uint32_t W, uint8_t B);

  constexpr uint32_t const& __cordl_internal_get__RunningCrc32Result() const;

  constexpr uint32_t& __cordl_internal_get__RunningCrc32Result();

  constexpr int64_t const& __cordl_internal_get__TotalBytesRead() const;

  constexpr int64_t& __cordl_internal_get__TotalBytesRead();

  constexpr void __cordl_internal_set__RunningCrc32Result(uint32_t value);

  constexpr void __cordl_internal_set__TotalBytesRead(int64_t value);

  /// @brief Method .ctor, addr 0x14b35a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_crc32Table();

  /// @brief Method get_Crc32Result, addr 0x14b3200, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Crc32Result();

  /// @brief Method get_TotalBytesRead, addr 0x14b31f8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_TotalBytesRead();

  static inline void setStaticF_crc32Table(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CRC32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CRC32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CRC32(CRC32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CRC32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CRC32(CRC32 const&) = delete;

  /// @brief Field _TotalBytesRead, offset: 0x10, size: 0x8, def value: None
  int64_t ____TotalBytesRead;

  /// @brief Field _RunningCrc32Result, offset: 0x18, size: 0x4, def value: None
  uint32_t ____RunningCrc32Result;

  /// @brief Field BUFFER_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BUFFER_SIZE{ static_cast<int32_t>(0x2000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::Ionic::Zlib::CRC32, 0x20>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::Ionic::Zlib::CRC32, ____TotalBytesRead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::Ionic::Zlib::CRC32, ____RunningCrc32Result) == 0x18, "Offset mismatch!");

} // namespace ThirdParty::Ionic::Zlib
NEED_NO_BOX(::ThirdParty::Ionic::Zlib::CRC32);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::Ionic::Zlib::CRC32*, "ThirdParty.Ionic.Zlib", "CRC32");
