#ifndef MUSICAL_NOTE_H // check whether this class has been compiled
#define MUSICAL_NOTE_H

// FILE: musicalNote.h
// CLASS PROVIDED: musicalNote
//   class used to represent a musical note along with various
//   properties such as position relative to others in scale and
//   frequency.
//
// CONSTRUCTOR
//   musicalNote(int value, float length);
//     Precondition: NONE
//     Postcondition: Constructs a musicalNote object whose value
//     represents the note using an integer with A above middle C
//     representing 0 and middle C representing -9 as well as a
//     length of quarter note. By default, the musicalNote object's
//     value is set to middle C or -9 and its length is set to a
//     quarter note.
//
// PUBLIC MODIFIER FUNCTIONS
//   void setValue(int newValue);
//     Precondition: newValue must fall in the range of -9 to 2
//     including only integers in that range but the value is used
//     to specify how far it moves from its current position in
//     either a negative or positive direction. Thus, the value of
//     newValue cannot be -9 if the current value is less than 0 or
//     2 if the current value is greater than 0.
//     Postcondition: The value of the musicalNode object will be
//     set to that specified by the formal parameter.
//   void setLength(float newLength);
//     Precondition: The value of newLength must be one of the
//     following: sixteenth, eight, quarter, half or whole note.
//     Postcondition: The length of the note is set to that
//     specified by the formal parameter's contents.
//
// PUBLIC ACCESSOR FUNCTIONS
//   int getValueAsInt() const;
//     Precondition: NONE
//     Postcondition: Returns the integral value of the note
//   float getLength() const;
//     Precondition: NONE
//     Postcondition: Returns the length of the note
//   float getFrequency() const;
//     Precondition: NONE (by default, a musicalNote object has a
//                         quarter note length and a corresponding
//                         frequency).
//     Postcondition: Returns the frequency of the note which is
//     calculated by 440 x 2^(n/12) where n is the value of the
//     note.
//   string getNoteValue() const;
//     Precondition: NONE
//     Postcondition: Returns the value of the note as a string
//     including whether it is sharp or natural
//
// NON-MEMBER FUNCTIONS
//   bool operator ==(const musicalNote& n1, const musicalNote& n2);
//     Precondition: NONE
//     Postcondition: Returns true if n1 and n2 are the same note
//     (i.e. have the same value and length). Note, the frequency
//     alone cannot be used to determine whether the notes are the
//     same due to the fact that the lengths of two notes may be
//     different while their values and frequencies are equal.

#include <string> // for string objects to be used in return values

namespace mad_2c
{
    class musicalNote
    {
    public:
        // Constructor
        musicalNote(int initValue = -9, float initLength = 0.25);
        // Modifiers
        void setValue(int newValue);
        void setLength(float newLength);
        // Accessors
        int getValueAsInt() const { return value; }
        float getLength() const { return length; }
        float getFrequency() const;
        std::string getNoteValue() const;

    private:
        int value;
        float length;
    };

    // Non-Member
    bool operator ==(const musicalNote& n1, const musicalNote& n2);
}
#endif // MUSICAL_NOTE_H