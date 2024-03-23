#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hashtable)
namespace ExitGames::Client::Photon {
struct DictionaryEntryEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class Hashtable;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::Hashtable);
// Type: ExitGames.Client.Photon::Hashtable
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::Hashtable*
class CORDL_TYPE Hashtable : public ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*> {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  /// @brief Field boxedByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_boxedByte, put = setStaticF_boxedByte))::ArrayW<::System::Object*, ::Array<::System::Object*>*> boxedByte;

  /// @brief Method Add, addr 0x277335c, size 0xac, virtual false, abstract: false, final false
  inline void Add(uint8_t k, ::System::Object* v);

  /// @brief Method Clone, addr 0x2773d2c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method ContainsKey, addr 0x27734ac, size 0xa4, virtual false, abstract: false, final false
  inline bool ContainsKey(uint8_t key);

  /// @brief Method GetBoxedByte, addr 0x2772f18, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Object* GetBoxedByte(uint8_t value);

  /// @brief Method GetEnumerator, addr 0x2773550, size 0x7c, virtual false, abstract: false, final false
  inline ::ExitGames::Client::Photon::DictionaryEntryEnumerator GetEnumerator();

  static inline ::ExitGames::Client::Photon::Hashtable* New_ctor();

  static inline ::ExitGames::Client::Photon::Hashtable* New_ctor(int32_t x);

  /// @brief Method Remove, addr 0x2773408, size 0xa4, virtual false, abstract: false, final false
  inline void Remove(uint8_t k);

  /// @brief Method ToString, addr 0x27735e0, size 0x74c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2773094, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27730dc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t x);

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_boxedByte();

  /// @brief Method get_Item, addr 0x2773134, size 0x68, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Item, addr 0x27731fc, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(uint8_t key);

  static inline void setStaticF_boxedByte(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_Item, addr 0x277319c, size 0x60, virtual false, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method set_Item, addr 0x27732b0, size 0xac, virtual false, abstract: false, final false
  inline void set_Item(uint8_t key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable(Hashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable(Hashtable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::Hashtable, 0x50>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::Hashtable);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Hashtable*, "ExitGames.Client.Photon", "Hashtable");
