#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StructWrapperPools)
namespace ExitGames::Client::Photon::StructWrapping {
template <typename T> class StructWrapperPool_1;
}
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperPool;
}
namespace ExitGames::Client::Photon::StructWrapping {
template <typename T> class StructWrapper_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperPools;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools);
// Type: ExitGames.Client.Photon.StructWrapping::StructWrapperPools
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon.StructWrapping::StructWrapperPools*
class CORDL_TYPE StructWrapperPools : public ::System::Object {
public:
  // Declarations
  /// @brief Field mappedBoolWrappers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mappedBoolWrappers,
                             put = setStaticF_mappedBoolWrappers))::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*,
                                                                           ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*> mappedBoolWrappers;

  /// @brief Field mappedByteWrappers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mappedByteWrappers,
                             put = setStaticF_mappedByteWrappers))::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*,
                                                                           ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*> mappedByteWrappers;

  /// @brief Field pools, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pools,
                      put = __cordl_internal_set_pools))::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>* pools;

  /// @brief Field used, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_used, put = __cordl_internal_set_used))::System::Collections::Generic::List_1<::System::IDisposable*>* used;

  /// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Acquire(T value);

  /// @brief Method Acquire, addr 0x2ac4580, size 0x84, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* Acquire(bool value);

  /// @brief Method Acquire, addr 0x2ac4504, size 0x7c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* Acquire(uint8_t value);

  /// @brief Method Clear, addr 0x2ac4604, size 0x1f8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetPoolForType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* GetPoolForType();

  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*& __cordl_internal_get_pools();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*> const&
  __cordl_internal_get_pools() const;

  constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& __cordl_internal_get_used();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::IDisposable*>*> const& __cordl_internal_get_used() const;

  constexpr void __cordl_internal_set_pools(::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>* value);

  constexpr void __cordl_internal_set_used(::System::Collections::Generic::List_1<::System::IDisposable*>* value);

  /// @brief Method .ctor, addr 0x2ac47fc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*>
  getStaticF_mappedBoolWrappers();

  static inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*>
  getStaticF_mappedByteWrappers();

  static inline void
  setStaticF_mappedBoolWrappers(::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>*> value);

  static inline void setStaticF_mappedByteWrappers(
      ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*, ::Array<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StructWrapperPools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StructWrapperPools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StructWrapperPools(StructWrapperPools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StructWrapperPools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StructWrapperPools(StructWrapperPools const&) = delete;

  /// @brief Field pools, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>* ___pools;

  /// @brief Field used, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::IDisposable*>* ___used;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools, 0x20>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools, ___pools) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools, ___used) == 0x18, "Offset mismatch!");

} // namespace ExitGames::Client::Photon::StructWrapping
NEED_NO_BOX(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperPools");
