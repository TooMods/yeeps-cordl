#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NCommandPool)
namespace ExitGames::Client::Photon {
class EnetPeer;
}
namespace ExitGames::Client::Photon {
class NCommand;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class NCommandPool;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::NCommandPool);
// Type: ExitGames.Client.Photon::NCommandPool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::NCommandPool*
class CORDL_TYPE NCommandPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pool, put = __cordl_internal_set_pool))::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>* pool;

  /// @brief Method Acquire, addr 0x277598c, size 0x1c8, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::NCommand* Acquire(::ExitGames::Client::Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames::Client::Photon::StreamBuffer* payload, uint8_t channel);

  /// @brief Method Acquire, addr 0x277c9f0, size 0x1b4, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::NCommand* Acquire(::ExitGames::Client::Photon::EnetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBuff, ByRef<int32_t> readingOffset);

  static inline ::ExitGames::Client::Photon::NCommandPool* New_ctor();

  /// @brief Method Release, addr 0x2780728, size 0x13c, virtual false, abstract: false, final false
  inline void Release(::ExitGames::Client::Photon::NCommand* nCommand);

  constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_pool();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*> const& __cordl_internal_get_pool() const;

  constexpr void __cordl_internal_set_pool(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>* value);

  /// @brief Method .ctor, addr 0x2774d28, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NCommandPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NCommandPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NCommandPool(NCommandPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NCommandPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NCommandPool(NCommandPool const&) = delete;

  /// @brief Field pool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>* ___pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::NCommandPool, 0x18>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::NCommandPool, ___pool) == 0x10, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::NCommandPool);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::NCommandPool*, "ExitGames.Client.Photon", "NCommandPool");
