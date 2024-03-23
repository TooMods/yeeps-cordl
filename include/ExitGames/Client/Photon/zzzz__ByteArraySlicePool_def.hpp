#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArraySlicePool)
namespace ExitGames::Client::Photon {
class ByteArraySlice;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class ByteArraySlicePool;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::ByteArraySlicePool);
// Type: ExitGames.Client.Photon::ByteArraySlicePool
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::ByteArraySlicePool*
class CORDL_TYPE ByteArraySlicePool : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AllocationCounter)) int32_t AllocationCounter;

  __declspec(property(get = get_MinStackIndex, put = set_MinStackIndex)) int32_t MinStackIndex;

  /// @brief Field allocationCounter, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_allocationCounter, put = __cordl_internal_set_allocationCounter)) int32_t allocationCounter;

  /// @brief Field minStackIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_minStackIndex, put = __cordl_internal_set_minStackIndex)) int32_t minStackIndex;

  /// @brief Field poolTiers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_poolTiers,
                      put = __cordl_internal_set_poolTiers))::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*,
                                                                     ::Array<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>*> poolTiers;

  /// @brief Method Acquire, addr 0x27725d4, size 0x204, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ByteArraySlice* Acquire(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Acquire, addr 0x2772964, size 0x33c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ByteArraySlice* Acquire(int32_t minByteCount);

  /// @brief Method ClearPools, addr 0x2772ca0, size 0x278, virtual false, abstract: false, final false
  inline void ClearPools(int32_t lower, int32_t upper);

  static inline ::ExitGames::Client::Photon::ByteArraySlicePool* New_ctor();

  /// @brief Method PopOrCreate, addr 0x27727d8, size 0x18c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::ByteArraySlice* PopOrCreate(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>* stack, int32_t stackIndex);

  /// @brief Method Release, addr 0x27721f4, size 0x214, virtual false, abstract: false, final false
  inline bool Release(::ExitGames::Client::Photon::ByteArraySlice* slice, int32_t stackIndex);

  constexpr int32_t const& __cordl_internal_get_allocationCounter() const;

  constexpr int32_t& __cordl_internal_get_allocationCounter();

  constexpr int32_t const& __cordl_internal_get_minStackIndex() const;

  constexpr int32_t& __cordl_internal_get_minStackIndex();

  constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*,
                     ::Array<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>*> const&
  __cordl_internal_get_poolTiers() const;

  constexpr ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*,
                     ::Array<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>*>&
  __cordl_internal_get_poolTiers();

  constexpr void __cordl_internal_set_allocationCounter(int32_t value);

  constexpr void __cordl_internal_set_minStackIndex(int32_t value);

  constexpr void __cordl_internal_set_poolTiers(
      ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*, ::Array<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>*>
          value);

  /// @brief Method .ctor, addr 0x277244c, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllocationCounter, addr 0x2772444, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AllocationCounter();

  /// @brief Method get_MinStackIndex, addr 0x2772410, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MinStackIndex();

  /// @brief Method set_MinStackIndex, addr 0x2772418, size 0x2c, virtual false, abstract: false, final false
  inline void set_MinStackIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteArraySlicePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteArraySlicePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteArraySlicePool(ByteArraySlicePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteArraySlicePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteArraySlicePool(ByteArraySlicePool const&) = delete;

  /// @brief Field minStackIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___minStackIndex;

  /// @brief Field poolTiers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*, ::Array<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::ByteArraySlice*>*>*>
      ___poolTiers;

  /// @brief Field allocationCounter, offset: 0x20, size: 0x4, def value: None
  int32_t ___allocationCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::ByteArraySlicePool, 0x28>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlicePool, ___minStackIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlicePool, ___poolTiers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::ByteArraySlicePool, ___allocationCounter) == 0x20, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::ByteArraySlicePool);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::ByteArraySlicePool*, "ExitGames.Client.Photon", "ByteArraySlicePool");
