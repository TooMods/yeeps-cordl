#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CircularReferenceTracking)
namespace Amazon::Util {
class __CircularReferenceTracking__Tracker;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Util {
class CircularReferenceTracking;
}
namespace Amazon::Util {
class __CircularReferenceTracking__Tracker;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::CircularReferenceTracking);
MARK_REF_PTR_T(::Amazon::Util::__CircularReferenceTracking__Tracker);
// Type: ::Tracker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::CircularReferenceTracking::Tracker*
class CORDL_TYPE __CircularReferenceTracking__Tracker : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_State, put = set_State))::Amazon::Util::CircularReferenceTracking* State;

  __declspec(property(get = get_Target, put = set_Target))::System::Object* Target;

  /// @brief Field <State>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__State_k__BackingField, put = __cordl_internal_set__State_k__BackingField))::Amazon::Util::CircularReferenceTracking* _State_k__BackingField;

  /// @brief Field <Target>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Target_k__BackingField, put = __cordl_internal_set__Target_k__BackingField))::System::Object* _Target_k__BackingField;

  /// @brief Field disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x220fb60, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x220fb28, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x220fbcc, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Amazon::Util::__CircularReferenceTracking__Tracker* New_ctor(::Amazon::Util::CircularReferenceTracking* state, ::System::Object* target);

  /// @brief Method ToString, addr 0x220fab0, size 0x78, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Amazon::Util::CircularReferenceTracking*& __cordl_internal_get__State_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::CircularReferenceTracking*> const& __cordl_internal_get__State_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__Target_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Target_k__BackingField() const;

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr void __cordl_internal_set__State_k__BackingField(::Amazon::Util::CircularReferenceTracking* value);

  constexpr void __cordl_internal_set__Target_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_disposed(bool value);

  /// @brief Method .ctor, addr 0x220f830, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Util::CircularReferenceTracking* state, ::System::Object* target);

  /// @brief Method get_State, addr 0x220faa0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::CircularReferenceTracking* get_State();

  /// @brief Method get_Target, addr 0x220fa90, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_State, addr 0x220faa8, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::Amazon::Util::CircularReferenceTracking* value);

  /// @brief Method set_Target, addr 0x220fa98, size 0x8, virtual false, abstract: false, final false
  inline void set_Target(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CircularReferenceTracking__Tracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CircularReferenceTracking__Tracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CircularReferenceTracking__Tracker(__CircularReferenceTracking__Tracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CircularReferenceTracking__Tracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CircularReferenceTracking__Tracker(__CircularReferenceTracking__Tracker const&) = delete;

  /// @brief Field <Target>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____Target_k__BackingField;

  /// @brief Field <State>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Util::CircularReferenceTracking* ____State_k__BackingField;

  /// @brief Field disposed, offset: 0x20, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__CircularReferenceTracking__Tracker, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__CircularReferenceTracking__Tracker, ____Target_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__CircularReferenceTracking__Tracker, ____State_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__CircularReferenceTracking__Tracker, ___disposed) == 0x20, "Offset mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::CircularReferenceTracking
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::CircularReferenceTracking*
class CORDL_TYPE CircularReferenceTracking : public ::System::Object {
public:
  // Declarations
  using Tracker = ::Amazon::Util::__CircularReferenceTracking__Tracker;

  /// @brief Field referenceTrackers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceTrackers,
                      put = __cordl_internal_set_referenceTrackers))::System::Collections::Generic::Stack_1<::Amazon::Util::__CircularReferenceTracking__Tracker*>* referenceTrackers;

  /// @brief Field referenceTrackersLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceTrackersLock, put = __cordl_internal_set_referenceTrackersLock))::System::Object* referenceTrackersLock;

  static inline ::Amazon::Util::CircularReferenceTracking* New_ctor();

  /// @brief Method PopTracker, addr 0x220f85c, size 0x188, virtual false, abstract: false, final false
  inline void PopTracker(::Amazon::Util::__CircularReferenceTracking__Tracker* tracker);

  /// @brief Method Track, addr 0x220f424, size 0x278, virtual false, abstract: false, final false
  inline ::System::IDisposable* Track(::System::Object* target);

  /// @brief Method TrackerExists, addr 0x220f69c, size 0x194, virtual false, abstract: false, final false
  inline bool TrackerExists(::System::Object* target);

  constexpr ::System::Collections::Generic::Stack_1<::Amazon::Util::__CircularReferenceTracking__Tracker*>*& __cordl_internal_get_referenceTrackers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::Amazon::Util::__CircularReferenceTracking__Tracker*>*> const& __cordl_internal_get_referenceTrackers() const;

  constexpr ::System::Object*& __cordl_internal_get_referenceTrackersLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_referenceTrackersLock() const;

  constexpr void __cordl_internal_set_referenceTrackers(::System::Collections::Generic::Stack_1<::Amazon::Util::__CircularReferenceTracking__Tracker*>* value);

  constexpr void __cordl_internal_set_referenceTrackersLock(::System::Object* value);

  /// @brief Method .ctor, addr 0x220f9e4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CircularReferenceTracking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CircularReferenceTracking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CircularReferenceTracking(CircularReferenceTracking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CircularReferenceTracking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CircularReferenceTracking(CircularReferenceTracking const&) = delete;

  /// @brief Field referenceTrackersLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___referenceTrackersLock;

  /// @brief Field referenceTrackers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::Amazon::Util::__CircularReferenceTracking__Tracker*>* ___referenceTrackers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::CircularReferenceTracking, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::CircularReferenceTracking, ___referenceTrackersLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::CircularReferenceTracking, ___referenceTrackers) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::CircularReferenceTracking);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::CircularReferenceTracking*, "Amazon.Util", "CircularReferenceTracking");
NEED_NO_BOX(::Amazon::Util::__CircularReferenceTracking__Tracker);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__CircularReferenceTracking__Tracker*, "Amazon.Util", "CircularReferenceTracking/Tracker");
