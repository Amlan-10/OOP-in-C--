
                void calculate()
                {
                        for (int i = 0; i < 5; i++)
                        {
                                
                                t1[i] = marks1[i] + marks2[i] + marks3[i];
                                cout << "Student " << i + 1 << ": ";
                                cout << "Total out of hundred: " << t1[i] << "\t";
                                cout << endl;
                                cout << "Percentage: " << percentage[i] << "%\t";
                                cout << endl;
                                
                        }
                }