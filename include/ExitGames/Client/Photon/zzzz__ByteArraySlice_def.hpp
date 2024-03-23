#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArraySlice)
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ByteArraySlice;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::ByteArraySlice);
// Type: ExitGames.Client.Photon::ByteArraySlice
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::ByteArraySlice*
class CORDL_TYPE ByteArraySlice : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Count, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Count, put = __cordl_internal_set_Count)) int32_t Count;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  /// @brief Field returnPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_returnPool, put = __cordl_internal_set_returnPool))::ExitGames::Client::Photon::ByteArraySlicePool* returnPool;

  /// @brief Field stackIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_stackIndex, put = __cordl_internal_set_stackIndex)) int32_t stackIndex;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27721bc, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::ExitGames::Client::Photon::ByteArraySlice* New_ctor();

  static inline ::ExitGames::Client::Photon::ByteArraySlice* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  static inline ::ExitGames::Client::Photon::ByteArraySlice* New_ctor(::ExitGames::Client::Photon::ByteArraySlicePool* returnPool, int32_t stackIndex);

  /// @brief Method Release, addr 0x27721c0, size 0x34, virtual false, abstract: false, final false
  inline bool Release();

  /// @brief Method Reset, addr 0x2772408, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr int32_t const& __cordl_internal_get_Count() const;

  constexpr int32_t& __cordl_internal_get_Count();

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr ::ExitGames::Client::Photon::ByteArraySlicePool*& __cordl_internal_get_returnPool();

  constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::ByteArraySlicePool*> const& __cordl_internal_get_returnPool() const;

  constexpr int32_t const& __cordl_internal_get_stackIndex() const;

  constexpr int32_t& __cordl_internal_get_stackIndex();

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Count(int32_t value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  constexpr void __cordl_internal_set_returnPool(::ExitGames::Client::Photon::ByteArraySlicePool* value);

  constexpr void __cordl_internal_set_stackIndex(int32_t value);

  /// @brief Method .ctor, addr 0x2772198, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2772150, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x27720c4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ExitGames::Client::Photon::ByteArraySlicePool* returnPool, int32_t stackIndex);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteArraySlice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteArraySlice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteArraySlice(ByteArraySlice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteArraySlice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteArraySlice(ByteArraySlice const&) = delete;

  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
  int32_t ___Offset;

  /// @brief Field Count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___Count;

  /// @brief Field returnPool, offset: 0x20, size: 0x8, def value: None
  ::ExitGames::Client::Photon::ByteArraySlicePool* ___returnPool;

  /// @brief Field stackIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___stackIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::ByteArraySlice, 0x30>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___Count) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___returnPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlice, ___stackIndex) == 0x28, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::ByteArraySlice);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::ByteArraySlice*, "ExitGames.Client.Photon", "ByteArraySlice");
