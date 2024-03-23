#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StructWrapperUtility)
namespace ExitGames::Client::Photon::StructWrapping {
template <typename T> class StructWrapper_1;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperUtility;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility);
// Type: ExitGames.Client.Photon.StructWrapping::StructWrapperUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon.StructWrapping::StructWrapperUtility*
class CORDL_TYPE StructWrapperUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method BoxAll, addr 0x2ac96f8, size 0x218, virtual false, abstract: false, final false
  static inline void BoxAll(::ExitGames::Client::Photon::Hashtable* table, bool recursive);

  /// @brief Method DisconnectPooling, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DisconnectPooling(T table);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Get(::System::Object* obj);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Get(::ExitGames::Client::Photon::Hashtable* table, uint8_t key);

  /// @brief Method GetWrappedType, addr 0x2ac9260, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Type* GetWrappedType(::System::Object* obj);

  /// @brief Method IsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsType(::System::Object* obj);

  /// @brief Method ReleaseAllWrappers, addr 0x2ac9480, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ReleaseAllWrappers(::ArrayW<::System::Object*, ::Array<::System::Object*>*> collection);

  /// @brief Method ReleaseAllWrappers, addr 0x2ac9544, size 0x1b4, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::Hashtable* ReleaseAllWrappers(::ExitGames::Client::Photon::Hashtable* table);

  /// @brief Method ReleaseAllWrappers, addr 0x2ac92ec, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Object*>* ReleaseAllWrappers(::System::Collections::Generic::List_1<::System::Object*>* collection);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryGetValue(::ExitGames::Client::Photon::Hashtable* table, ::System::Object* key, ByRef<T> value);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryGetValue(::ExitGames::Client::Photon::Hashtable* table, uint8_t key, ByRef<T> value);

  /// @brief Method TryUnwrapValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryUnwrapValue(::ExitGames::Client::Photon::Hashtable* table, ::System::Object* key, ByRef<T> value);

  /// @brief Method TryUnwrapValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryUnwrapValue(::ExitGames::Client::Photon::Hashtable* table, uint8_t key, ByRef<T> value);

  /// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Unwrap(::System::Object* obj);

  /// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Unwrap(::ExitGames::Client::Photon::Hashtable* table, ::System::Object* key);

  /// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Unwrap(::ExitGames::Client::Photon::Hashtable* table, uint8_t key);

  /// @brief Method Wrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Wrap(T value);

  /// @brief Method Wrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* Wrap(T value, bool persistant);

  /// @brief Method Wrap, addr 0x2ac3938, size 0x84, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* Wrap(bool value);

  /// @brief Method Wrap, addr 0x2ac39c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* Wrap(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StructWrapperUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StructWrapperUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StructWrapperUtility(StructWrapperUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StructWrapperUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StructWrapperUtility(StructWrapperUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon::StructWrapping
NEED_NO_BOX(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperUtility");
